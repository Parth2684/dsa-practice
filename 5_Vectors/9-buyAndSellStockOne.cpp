# include <iostream>
# include <vector>
# include <limits.h>

using namespace std;

int main () {
    vector<int> arr {1, 3, 6, 9, 11};
    int buy = 0;
    int sell = 0;
    int maxDiff = 0;
    for (int i = 0; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++) {
            if(maxDiff < (arr[j] - arr[i])) {
                maxDiff = (arr[j] - arr[i]);
                buy = arr[i];
                sell = arr[j];
            }
        }
    }
    cout << "Buy for " << buy << " Sell for " << sell << " Profit of " << maxDiff; 
}