# include <iostream>
using namespace std;

int factorial (int num) {
    int ans = num;
    for(int i=num - 1; i>1; i--){
        ans = ans * i;
    }
    return ans;
}

int main() {
    int input;
    cout << "Enter the number you want factorial of ";
    cin >> input;
    cout << "factorial of " << input << " is " << factorial(input); 
    return 0;
}