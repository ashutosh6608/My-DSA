// ------------------------ PHONE NUMBER CONFIGURATION ------------------------
const char phoneNumber[] = "+918115747924";   // Replace with your valid phone number

// ------------------------ MPU6050 ACCELEROMETER -----------------------------
#include <Wire.h>
#include "I2Cdev.h"
#include "MPU6050.h"

MPU6050 mpu;
int16_t ax, ay, az, gx, gy, gz;

struct MyData {
  byte X;
  byte Y;
  byte Z;
};

MyData data;

// ------------------------ GPS MODULE (NEO-6M) -------------------------------
#include <TinyGPS++.h>
TinyGPSPlus gps;

// ------------------------ PIN DEFINITIONS -----------------------------------
const int buz = 11;       // Buzzer pin
const int trigPin = 10;   // Ultrasonic trigger pin
const int echoPin = 9;    // Ultrasonic echo pin
const int lightPin = 2;   // Light/LED pin

// Analog input pins
const int x_out = A0;     // Emergency button
const int y_out = A1;     // LDR sensor
const int z_out = A2;     // Soil moisture sensor

// ------------------------ DISTANCE VARIABLES --------------------------------
long duration, distance;

// ------------------------ LOCATION VARIABLES --------------------------------
volatile float minutes, seconds;
volatile int degree, secs, mins;

// ------------------------ SETUP ---------------------------------------------
void setup() {
  Serial.begin(9600);
  delay(3000);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buz, OUTPUT);
  pinMode(lightPin, OUTPUT);

  digitalWrite(buz, LOW);
  digitalWrite(lightPin, LOW);

  // Short buzzer beep at startup
  for (int i = 0; i < 2; i++) {
    digitalWrite(buz, HIGH);
    delay(100);
    digitalWrite(buz, LOW);
    delay(100);
  }

  Wire.begin();
  mpu.initialize();   // Initialize MPU6050
}

// ------------------------ MAIN LOOP -----------------------------------------
void loop() {

  // -------- ACCELEROMETER READING --------
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
  data.X = map(ax, -17000, 17000, 0, 255);
  data.Y = map(ay, -17000, 17000, 0, 255);
  data.Z = map(az, -17000, 17000, 0, 255);
  delay(200);

  // -------- FALL DETECTION --------
  if (data.Z < 100) {
    beep(20, 20);
    sendSMS("Stick fallen down!");
    sendLocation();
  }

  // -------- SENSOR READINGS --------
  int x_adc_value = analogRead(x_out);  // Emergency button
  int y_adc_value = analogRead(y_out);  // LDR sensor
  int z_adc_value = analogRead(z_out);  // Soil moisture

  // -------- ULTRASONIC DISTANCE --------
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration / 58.2;

  // -------- OBSTACLE DETECTION --------
  if (distance < 60) {
    beep(4, 70);
    sendSMS("Obstacle detected!");
    sendLocation();
  }

  // -------- EMERGENCY BUTTON --------
  if (x_adc_value > 500) {
    beep(5, 35);
    sendSMS("Emergency button pressed!");
    sendLocation();
  }

  // -------- LIGHT DETECTION --------
  if (y_adc_value < 100) {
    digitalWrite(lightPin, HIGH);
    sendSMS("Low light detected — Light turned ON.");
  } else {
    digitalWrite(lightPin, LOW);
  }

  // -------- WATER DETECTION --------
  if (z_adc_value < 500) {
    beep(2, 1000);
    sendSMS("Water detected!");
    sendLocation();
  }

  delay(500);
}

// ------------------------ BUZZER FUNCTION -----------------------------------
void beep(int times, int delayTime) {
  for (int i = 0; i < times; i++) {
    digitalWrite(buz, HIGH);
    delay(delayTime);
    digitalWrite(buz, LOW);
    delay(delayTime);
  }
}

// ------------------------ SEND SMS FUNCTION ---------------------------------
void sendSMS(const char* message) {
  Serial.println("AT+CMGF=1");       // Set SMS text mode
  delay(1000);
  Serial.print("AT+CMGS=\"");
  Serial.print(phoneNumber);
  Serial.println("\"");
  delay(1000);
  Serial.println(message);
  delay(500);
  Serial.write(26);                   // Ctrl+Z to send SMS
  delay(2000);
}

// ------------------------ SEND LOCATION FUNCTION ----------------------------
void sendLocation() {
  smartDelay(1000);
  double lat = gps.location.lat();
  double lng = gps.location.lng();
  bool loc_valid = gps.location.isValid();

  Serial.println("AT+CMGF=1");
  delay(1000);
  Serial.print("AT+CMGS=\"");
  Serial.print(phoneNumber);
  Serial.println("\"");
  delay(1000);
  Serial.print("Location: http://maps.google.com/?q=");

  if (loc_valid) {
    Serial.print(lat, 6);
    Serial.print(",");
    Serial.println(lng, 6);
  } else {
    // Dummy location if GPS not valid
    Serial.println("26.891986,81.072929");
  }

  delay(500);
  Serial.write(26);
  delay(2000);
}

// ------------------------ GPS SMART DELAY FUNCTION --------------------------
static void smartDelay(unsigned long ms) {
  unsigned long start = millis();
  do {
    while (Serial.available()) {
      gps.encode(Serial.read());
    }
  } while (millis() - start < ms);
}
