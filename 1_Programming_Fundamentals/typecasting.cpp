#include <iostream>
using namespace std;

int main () {
    int num = 'b';
    cout << num << endl; //implicit typecast
    double d = 5.7;
    int x = (int)d;
    cout << x << endl;
}