#include <iostream>
using namespace std;

int add (int num1, int num2) {
    return num1 + num2;
}

int main () {
    int num1;
    int num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    cout << "Addition is: " << add(num1, num2); 
    return 0;
}