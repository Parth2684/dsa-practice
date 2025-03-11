# include <iostream>
using namespace std;

int main () {
    int arr[5];
    // taking input of array
    cout << "Enter the integers in array" << endl;
    for (int i = 0; i<5; i++) {
        cin >> arr[i];
    }
    // giving output
    cout << "double of the array you provided was " ;
    for (int i = 0; i < 5; i++) {
        cout << (2*arr[i]) << " ";
    }
}