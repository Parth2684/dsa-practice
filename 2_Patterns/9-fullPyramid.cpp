// Pattern to print
//    *
//  * * *
// * * * *

# include <iostream>
using namespace std;

int main () {
    int rowInput;
    cout << "Enter number of rows";
    cin >> rowInput;
    for (int row = 0; row<rowInput; row++){
        for (int col = 0 ; col <  rowInput - row - 1; col++){
            cout << " ";
        }
        for (int col = 0; col < row +1; col++){
            cout << "* ";
        } 
        cout << endl;
    }
}