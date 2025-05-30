# include <iostream>
# include <vector>
using namespace std;

int main () {
    int sizeOfArray;
    cout << "What is the size of the array? " << endl;
    cin >> sizeOfArray;

    vector<int> arr (sizeOfArray);
    
    cout << "Enter the elements of the array: " << endl;
    
    for(int i = 0; i < sizeOfArray; i++) {
        cin >> arr[i];
    }
    
    cout << "Initial Array: " << endl;
    for (auto i : arr) {
        cout << i << " ";
    }

    cout << endl;
    
    int end = arr.size() - 1;
    
    swap(arr[0], arr[end]);
    
    for (int start = 1; start < arr.size(); start++) {
        swap(arr[start], arr[end]);
    }
    
    cout << "Final Array" << endl;
    for (auto i : arr) {
        cout << i << " ";
    }
}