// Pattern to print
// *****
// *  *
// * *
// *

#include <iostream>
using namespace std;

int main() {
    int inputRows;
    cout << "Enter the number of rows: ";
    cin >> inputRows;

    for (int rows = inputRows; rows > 0; rows--) {
        for (int cols = 0; cols < inputRows; cols++) {
            if (cols == rows - 1 || cols == 0 || rows == inputRows) {  // Fix condition
                cout << "* ";  // Fix extra space
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
