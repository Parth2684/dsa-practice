// Pattern to print
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1

# include <iostream>
using namespace std;

int main () {
    int inputRows;
    cout << "Enter number of rows: ";
    cin >> inputRows;
    for (int rows = inputRows; rows > 0; rows--){
        for (int cols = 0; cols < rows; cols++) {
            cout << cols + 1 << " ";
        }
        cout << endl;
    }
}