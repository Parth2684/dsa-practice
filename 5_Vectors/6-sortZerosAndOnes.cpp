# include <iostream>
# include <vector>
using namespace std;

int main () {
    vector<int> arr {1,1,0,1,0,0,0, 1, 0, 1,1,1,1,0,0,0,0,0,1,1,1,0, 1,1,0,0,1,0,1,1,0,1,0,1};
    int start = 0;
    for (int i = 0; i < arr.size(); i++) {
        if(arr[i] == 0) {
            swap(arr[i] , arr[start]);
            start++;
        }
    }

    for (auto i : arr) {
        cout << i << " ";
    }
}