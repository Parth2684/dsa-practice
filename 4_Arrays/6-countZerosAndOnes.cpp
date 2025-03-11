# include <iostream>
using namespace std;

void countZerosAndOnes (int arr[], int size) {
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i<size; i++) {
        if(arr[i] == 0) {
            zeroCount++;
        }else {
            oneCount++;
        }
    }
    cout << "Number of zeroes in the array: " << zeroCount << endl;
    cout << "Number of ones in the array: " << oneCount << endl;
}

int main () {
    int arr[10] = {0, 1, 1, 0, 0, 1, 1, 1, 1, 0};
    int size = 10;
    countZerosAndOnes(arr, size);
    return 0;
}