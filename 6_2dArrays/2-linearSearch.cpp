# include <iostream>
# include <limits.h>

using namespace std;

bool linearSearchInTwoD(int arr[][3], int rows, int number) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            if(number == arr[i][j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    cout << "Give an 3 by 3 array";
    int rows = 3;
    int cols = 3;

    int arr [3][3];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Your given array was" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }  
        cout << endl;
    }

    int number;
    cout << "Number to find: ";
    cin >> number;

    bool found = linearSearchInTwoD(arr, rows, number);
    if(found) {
        cout << "Element found in the array";
    }else{
        cout << "Element not found in the array";
    }
}