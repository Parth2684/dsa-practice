# include <iostream>
# include <vector>
using namespace std;

int main () {
    vector<int> arr{10,20,40,60,70};
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i+1; j < arr.size(); j++) {
            if(arr[i] + arr[j] == 80){
            cout << "(" << arr[i] << "," << arr[j] << ")"<< endl;
            }
        }
    } 
}