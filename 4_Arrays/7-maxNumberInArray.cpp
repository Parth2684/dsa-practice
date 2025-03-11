# include <iostream>
# include <limits.h>
using namespace std;

void findMax (int arr[], int size) {
    int max = INT_MIN;
    for (int i = 0; i< size; i++) {
        if (max < arr[i]) {
            max = arr [i];
        }
    }
    cout << "Largest number in the array is: " << max;
}

int main () {
    int arr[10] = {1, 654, 6984, 32168, 5354, 3254, 355479, 247, 57, 20686};
    int size = 10;
    findMax(arr, size);
    return 0;
}