# include <iostream>
using namespace std;

float area (float radius) {
    float pi = (3.14);
    float area = pi*radius*radius;
    return area;
}

int main () {
    float radius ;
    cout << "Enter the radius of circle: ";
    cin >> radius;
    cout << "Area of the circle is: " << area(radius);
    return 0;
}