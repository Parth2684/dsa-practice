# include <iostream>
using namespace std;

int main() {
    int arr [] = {1, 2, 3, 4, 5};
    // accessing array elements noob way
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;

    // better way

    for (int i=0; i<5; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}