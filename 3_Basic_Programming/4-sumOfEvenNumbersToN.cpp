# include <iostream>
using namespace std;

int sum (int number ) {
    int sum;
    for (int i = 0; i <= number; i+=2 ){
        sum += i;
    }
    return sum;
}

int main () {
    int number ;
    cout << "Enter the value of n: ";
    cin >> number;
    cout << "Sum of even numbers from 1 to " << number << " is " << sum(number);
    return 0;
}