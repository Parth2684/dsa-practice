# include <iostream>
using namespace std;

int main () {
    float marks;
    cout << "Enter your marks in percentage" << endl;
    cin >> marks;
    if(marks >= 90) {
        cout << "A grade";
    }
    else if (marks >= 70) {
        cout << "B grade";
    }
    else if (marks >= 50) {
        cout << "C grade";
    }
    else if (marks >= 40) {
        cout << "D grade";
    }
    else{
        cout << "Fail";
    }
}