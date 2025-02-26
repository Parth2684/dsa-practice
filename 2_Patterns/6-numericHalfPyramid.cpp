// Pattern to print
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5 

# include <iostream>
using namespace std;

int main () {
    int inputRows;
    cout << "Enter the number of rows" << endl;
    cin >> inputRows;
    cout << "Your pyramid: " << endl;
    for (int rows = 0; rows < inputRows; rows++){
        for (int cols = 0; cols <= rows; cols++){
            cout << cols + 1 << " ";
        }
        cout << endl;
    }
}