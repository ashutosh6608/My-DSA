 #include<iostream>
 using namespace std;

 class Stack{
     public:
    int *arr;
    int size;
    int top;
      Stack(int size){
        this->size = size;
        top = -1;
        arr = new int[size];
      }
 
    // push
 void push(int value){
    if( top == size-1){
        cout << "Stack Overflow";
    }
    else {
        top++;
    arr[top] = value;
    cout << "Pushed" << value << " into the stack\n";
    } 
 }

 // pop
 void pop(){
    if(top == -1){
        cout << "Stack Underflow\n";
    }
    else {
        cout << "popped" << arr[top+1] << " from the stack\n";
         top--;
    }
 }

 };