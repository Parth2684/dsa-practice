// Pattern to print
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

#include<iostream>
using namespace std;
int main(){
    int rowInput;
    cout << "Enter the number of rows";
    cin >> rowInput;
    for (int row = 0; row < rowInput; row++){
        for (int col = 0; col < row; col++){
            cout << " ";
        }
        for (int col = 0; col<rowInput - row; col++){
            cout << "* ";
        }
        cout << endl;
    }
}