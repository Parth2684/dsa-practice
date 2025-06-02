#include <iostream>
# include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,0,2,1,0,2,0,1,1,2};
    int start = 0;
    int end = arr.size() -1;
    int i = 0;
    while(i <= end) {
        if(arr[i] == 2) {
            swap(arr[i], arr[end]);
            end--;
            i--;
        }else if(arr[i] == 0) {
            swap(arr[i], arr[start]);
            start++;
            i++;
        }else {
            i++;
        }
    }

    for (auto i: arr) {
        cout << i << " ";
    }
}