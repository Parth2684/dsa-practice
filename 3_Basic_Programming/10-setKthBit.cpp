// It is a problem on geeksforgeeks 
# include <iostream>
using namespace std;

int main () {
    int n, k ;
    cout << "Enter the number " ;
    cin >> n;
    cout << endl << "Enter the value of k ";
    cin >> k;
    int mask = 1 << k;
    int ans = n | mask;
    cout << ans;
    return 0;
}