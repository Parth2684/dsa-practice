#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter Your age" << endl;
    cin >> age;
    if (age < 18) {
        cout << "You are not eligible to vote";
    }else{
        cout << "You are eligible to vote";
    }
}