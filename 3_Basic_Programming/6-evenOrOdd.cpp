# include <iostream>
using namespace std;

string evenOrOdd (int number) {
    if(number%2 == 0) {
        return "even";
    }else{
        return "odd";
    }
}

int main () {
    int input;
    cout << "Enter the number you want to verify if it is even or odd ";
    cin >> input;
    cout << "Given number is " << evenOrOdd(input);
    return 0;
}