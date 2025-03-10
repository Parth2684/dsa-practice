# include <iostream>
using namespace std;

float farenheit (float num) {
    float ans = (num * 9/5) + 32;
    return ans;
}

int main () {
    float celcius;
    cout << "Enter the value in celcius: ";
    cin >> celcius;
    cout << celcius << " celcius = " << farenheit(celcius) << " farenheit";
    return 0;
}