

// A modified Kaprekar number is a positive whole number with a special property. If you square it, then split the number into two integers and sum those integers, you have the same value you started with.

// Consider a positive whole number n with d digits. We square n to arrive at a number that is either 2*d digits long or (2*d)-1  digits long. Split the string representation of the square into two parts, l and r. The right hand part, r must be d digits long. The left is the remaining substring. Convert those two substrings back to integers, add them and see if you get n.

// Example

// n=5

// d=1

// First calculate that n^2=25 . Split that into two strings and convert them back to integers 2 and 5. Test 2+5 =7 != 5, so this is not a modified Kaprekar number. If n = 9 d = 1 and n^2 = 81 . This gives us 1+8 = 9, the original n.

// Note: r may have leading zeros.

// Given two positive integers  and  where  is lower than , write a program to print the modified Kaprekar numbers in the range between  and , inclusive. If no modified Kaprekar numbers exist in the given range, print INVALID RANGE.

 

// kaprekarNumbers has the following parameter(s):

// int p: the lower limit
// int q: the upper limit
// Prints

// It should print the list of modified Kaprekar numbers, space-separated on one line and in ascending order. If no modified Kaprekar numbers exist in the given range, print INVALID RANGE. No return value is required.

// Input Format

// The first line contains the lower integer limit .
// The second line contains the upper integer limit .

// Note: Your range should be inclusive of the limits.

 

// Sample Input

// STDIN   Function
// -----   --------
// 1       p = 1
// 100     q = 100
// Sample Output

// 1 9 45 55 99






#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool kaprekar(int n)
{
    int d = to_string(n).length();
    string num = to_string(n * n);

    string r1 = num.substr(0, num.size() - d);
    string r2 = num.substr(num.size() - d);

    int n1 = 0;
    if(r1 != "")
        n1 = stoi(r1);

    int n2 = stoi(r2);

    return (n1 + n2 == n);
}

int main()
{
    int r1, r2;
    cin >> r1 >> r2;

    bool found = false;

    for(int i = r1; i <= r2; i++)
    {
        if(kaprekar(i))
        {
            found = true;
            cout << i << " ";
        }
    }

    if(!found)
        cout << "INVALID RANGE";
}