# include <iostream>
using namespace std;


int main () {
    int arr [3][3];
    cout << "Enter the elements of the array rowwise";
    for ( int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Printing row-wise array
    cout << "Printing row wise" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Printing col wise" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    
    int ans[3] = {0,0,0};
    for (int i = 0; i< 3; i++) {
        for (int j = 0; j <3; j++) {
            ans[i] += arr[i][j];
        }
        cout << ans[i] << " ";
    }
}