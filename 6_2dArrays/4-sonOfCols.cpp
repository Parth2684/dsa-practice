# include <iostream>

using namespace std;

int main () {
    int arr [3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int sum [3] = {0, 0, 0};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            sum[i] = sum[i] + arr[j][i];
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    for (auto i: sum) {
        cout << i << " ";
    }
}