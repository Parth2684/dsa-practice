// Pattern to print
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *     

#include <iostream>
using namespace std;
int main(){
    int input;
    cout << "Enter the number of cols you want";
    cin >> input;
    for (int row = 0; row < input; row++){
        for (int col = 0; col < input - row - 1; col++){
            cout << " ";
        }
        for (int col =0; col < row + 1; col++){
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < input; row++){
            for (int col = 0; col < row; col++){
                cout << " ";
            }
            for (int col = 0; col<input - row; col++){
                cout << "* ";
            }
            cout << endl;
        }
}