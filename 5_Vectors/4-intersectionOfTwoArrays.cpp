# include <iostream>
# include <vector>
# include <limits.h> 
using namespace std;

int main () {
    int arr1[5] = {1,3,3,7,9};
    int arr2[5] = {2,3,3,7,11};
    vector<int> ans;
    for(int i = 0; i< 5; i++) {
        for(int j= 0; j<5; j++) {
            if(arr1[i] == arr2[j]) {
                ans.push_back(arr1[i]);
                arr2[j] = INT_MIN;
            }
        }
    }
    cout << "Following is the intesection: ";

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}