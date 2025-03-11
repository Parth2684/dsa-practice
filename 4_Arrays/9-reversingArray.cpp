# include <iostream>
using namespace std;

int main () {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int start = 0;
    int index = size - 1;
    int revArr[5];
    while (index >= 0) {
        revArr[start] = arr[index];
        cout << revArr[start] << " ";
        start++; 
        index--;
    }
    return 0;
}