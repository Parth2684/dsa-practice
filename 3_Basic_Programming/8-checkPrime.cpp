# include <iostream>
using namespace std;

string isPrime (int num) {
    for (int i = 2; i< num; i++) {
        if(num % i == 0) {
            return "not prime";
        }
    }
    return "prime";
}

int main () {
    int input;
    cout << "Enter the number you wanna check if its prime or not ";
    cin >> input;
    cout << input << " is " << isPrime(input); 
    return 0;
}