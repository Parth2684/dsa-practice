# include <iostream>
using namespace std;
int main (){
    int arr[5];
    cout << "Enter 5 elements" << endl;
    // input of array
    for (int i = 0 ; i<5; i++) {
        cin >> arr[i];
    }
    // printing array
    cout << "array is ";
    for (int i = 0; i<5; i++) {
        cout << arr[i] << " ";
    }
}