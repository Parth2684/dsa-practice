// Pattern to print
// *
// * *
// * * *
// * * * *
// * * * * *

# include <iostream>
using namespace std;

int main () {
    int inputRows;
    cout << "Enter number of row" << endl;
    cin >> inputRows;
    for (int rows = 0; rows < inputRows; rows++) {
        for (int cols = 0; cols <= rows; cols++) {
            cout << "* ";
        }
        cout << endl;
    }
}