# include <iostream>
using namespace std;

void count (int number){
    for (int count = 1; count <=number; count++){
        cout << count << " ";
    }
}

int main () {
    int number;
    cout << "Enter the number till you want count to";
    cin >> number;
    count(number);
    return 0;
}