# include <iostream>
# include <vector>
using namespace std;

int main () {
    vector <int> arr {1, -1, -654, 54,-54, 4, 21, -79, -21, -10};
    int start = 0;
    for (int i = 0; i < arr.size(); i++) {
        if(arr[i] < 0) {
            swap(arr[i], arr[start]);
            start++;
        }
    }
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}