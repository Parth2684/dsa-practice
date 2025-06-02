# include <iostream>
# include <limits.h>

using namespace std;

void findMinAndMax (int arr[][3]) {
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            if(arr[i][j] < minVal) {
                minVal = arr[i][j];
            }
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }
    cout << "Max value " << maxVal << endl;
    cout << "Min Value " << minVal << endl;
}

int main () {
    int min = INT_MIN;
    int max = INT_MAX;

    int arr[3][3];
    cout << "give the elements of an 3x3 array row-wise: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "Input array: " << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    findMinAndMax(arr);
}