# include <iostream>
# include <vector>
# include <limits.h>

using namespace std;

bool findInDuplicate(vector<int> duplicate, int num) {
    for (int i = 0; i < duplicate.size(); i++) {
        if(duplicate[i] == num) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> arr {1,2,3,4,4,4,1,1,4,2,2,5,5,5,6,7,8,9};
    vector<int> duplicate ;
    int start = 0;
    int end = arr.size() - 1;
    for (int i = start; i <= end; i++) {
        for (int j = i + 1; j<= end; j++) {
            if(arr[i] == arr[j]) {
                if(!findInDuplicate(duplicate, arr[i])) {
                    duplicate.push_back(arr[i]);
                }
            }
        }
    }
    for (int i = 0; i < duplicate.size(); i++) {
        cout << duplicate[i] << " ";
    }
}