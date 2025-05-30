// assuming there is no repeatation
# include <iostream>
# include <vector>
# include <limits.h>
using namespace std;



int main () {
    int len1, len2;
    cout << "Enter length of 1st array: " ;
    cin >> len1; 
    cout << "Enter length of 2nd array: " ;
    cin >> len2; 
    vector<int> arr1(len1);
    vector<int> arr2(len2);
    cout << "Enter the elements in 1st array: ";
    for (int i = 0; i < len1; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the elements in 2nd array: ";
    for (int i = 0; i < len2; i++) {
        cin >> arr2[i];
    }

    vector<int> ans;

    for (int i = 0; i < arr1.size(); i++) {
        for (int j = 0; j < arr2.size(); j++) {
            if(arr1[i] == arr2[j]) {
                arr2[j] = INT_MIN;
            }
        }
    }

    for (int i = 0; i<arr1.size(); i++) {
        for (int j = i+1; j < arr1.size(); j++) {
            if(arr1[i] == arr1[j]) {
                arr1[j] = INT_MIN;
            }
        }
        if(arr1[i] != INT_MIN) {
            ans.push_back(arr1[i]);
        }
        
    } 
    for (int i = 0; i<arr2.size(); i++) {
        if(arr2[i] != INT_MIN) {
            ans.push_back(arr2[i]);
        }
    } 

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " "; 
    }
    return 0;
}