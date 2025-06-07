# include <iostream>
# include <vector>
# include <cmath>

using namespace std;


int main() {
    vector<int> arr {1, 2, 5, 4, 6, 6};
    for (int i = 0; i < arr.size(); i++){
        int index = abs(arr[i]) -1;
        if(arr[index] > 0) {
            arr[index] *= -1;
        }
    }
    for (int i = 0; i < arr.size(); i++) {
        if(arr[i] > 0){
            cout << i + 1 << " ";
        }
    }
} 