
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a,b,c;
    cin >> a >> b >> c;

    int sum = a + b + c;

    if(sum % 3 != 0){
        cout << -1;
        return 0;
    }

    int x = sum / 3;

    int ops = (abs(a-x) + abs(b-x) + abs(c-x)) / 2;

    cout << ops;
}