#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int binary_search(vector<int>& arr, int& target) {
    int start = 0, end = arr.size() - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            return mid;
        }else if (arr[mid] < target) {
            start = mid + 1;
        }else {
            end = mid - 1;
        }
    } 
    return -1;
}


int main() {
    vector<int> arr = {1, 5, 8 , 9};
    int target = 8;
    cout << binary_search(arr, target);
    cout<< endl;
    cout << std::binary_search(arr.begin(), arr.end(), target);
}