# include <iostream>
# include <vector>

using namespace std;

int main () {
    vector<vector <int> > arr;
    vector<int> a {1, 2, 3};
    vector<int> b {4, 5, 6};
    vector<int> c {7, 8, 9};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    vector <vector <int> > brr (5, vector <int>(5, -8));

    
    for (int i = 0; i < brr.size(); i++) {
        for (int j = 0; j < brr[0].size(); j++){
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
}