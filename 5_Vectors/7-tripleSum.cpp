# include <iostream> 
# include <vector>
using namespace std;


int main () {
    vector<int> arr {0, 10, 20, 30, 40, 50, 60, 70};

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size() - 1; j++) {
            for (int k = j + 1; k < arr.size() - 2; k++) {
                if(arr[i] + arr[j] + arr[k] == 80) {
                    cout << "( " << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << endl; 
                }
            }
        }
    }
}
