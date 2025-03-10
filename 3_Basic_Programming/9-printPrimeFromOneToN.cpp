# include <iostream>
using namespace std;

bool prime (int n) {
    for (int i = 2; i < n; i++){
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

int main () {
    int input;
    cout << "Enter the value of n ";
    cin >> input;
    cout << "this is the list of prime numbers " ;
    for (int i= 2; i <=input; i++) {
        bool isPrime = prime(i);
        if(isPrime) {
            cout << i << " ";
        }
    }
    return 0;
}