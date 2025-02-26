// Pattern to print
// * * * * *
// *       *
// * * * * *


# include <iostream>
using namespace std;

int main () {
    int inputRows;
    cout << "Enter number of rows" << endl;
    cin >> inputRows;
    int inputCols;
    cout << "Enter number of columns" << endl;
    cin >> inputCols;

    for (int row = 0; row < inputRows; row++){
        if (row == 0 || row == inputRows-1){
            for (int col = 0; col < inputCols; col++){
                cout << "* ";
            }
        }
        else {
            cout << "* ";
            for (int spaces = 0; spaces < inputCols-2; spaces++) {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}