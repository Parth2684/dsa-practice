#include <iostream>
using namespace std;

int max (int num1, int num2 , int num3) {
    if (num1 > num2 && num1 > num3) {
        return num1;
    }else if(num2 > num1 && num2 > num3) {
        return num2;
    }
    else {
        return num3;
    }
}

int main () {
    int num1;
    int num2;
    int num3;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    cout << "Enter third number" << endl;
    cin >> num3;
    cout << "Maximum number is: " << max(num1, num2, num3);
    return 0;
}