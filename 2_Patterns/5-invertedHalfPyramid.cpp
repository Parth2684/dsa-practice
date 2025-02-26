// Pattern to print
// * * * * *
// * * * *
// * * *
// * *
// *

# include <iostream>
using namespace std;

int main () {
    int inputRows;
    cout << "Enter number of rows" << endl ;
    cin >> inputRows;
    for (int rows = inputRows; rows > 0; rows--){
        for (int cols = rows; cols > 0; cols--){
            cout << "* ";
        }
        cout << endl;
    }
}