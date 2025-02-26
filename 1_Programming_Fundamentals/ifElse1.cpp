# include <iostream>
using namespace std;
int main () {
    int numberOfBrothers;
    cout << "Enter Number of brothers" << endl ;
    cin >> numberOfBrothers ;
    if (numberOfBrothers == 0) {
        cout << "It is possible";
    }
    else {
        cout << "It is quite not possible";
    }
}