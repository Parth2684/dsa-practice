#include <iostream>
using namespace std;

bool linearSearch (int arr[], int size, int toFind) {
    for (int i = 0; i < size; i++) {
        if(arr[i] == toFind) {
            return true;
        }
    }
    return false;
}

int main () {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int toFind;
    cout << "Enter the element you want to search in the array: "; 
    cin >> toFind;
    if(linearSearch(arr, size, toFind)) {
        cout << "Element found ";
    }else{
        cout << "Element not found";
    }
    return 0;
}