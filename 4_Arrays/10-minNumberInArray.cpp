#include <iostream>
#include <limits.h>
using namespace std;

void findMin (int arr[], int size) {
    int min = INT_MAX;
    for (int i = 0; i < size; i++) {
        if(min > arr[i]) {
            min = arr[i];
        }
    }
    cout << min;
}

int main () {
    int arr[10] = {1, 2, 3, 8, 54, -3251, 541,25,21,965};
    findMin(arr, 10);
    return 0;
}