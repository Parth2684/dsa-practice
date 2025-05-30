#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main () {
    vector<int> arr{1,2,3,4,5};
    vector<int> brr{1,25,8,4,3};

    vector<int> crr;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < brr.size(); j++) {
            if(arr[i] == brr[j]) {
                crr.push_back(arr[i]);
                brr[j] = INT_MIN;
            }
        }
    }
    for (int k = 0; k < crr.size(); k++) {
        cout << crr[k] << " ";
    }

    return 0;
}