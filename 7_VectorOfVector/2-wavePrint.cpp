# include <iostream>
# include <vector>

using namespace std;

int main () {
    vector<vector <int> > arr {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int row =0;
    int col = 0;
    while(row < arr.size() && col < arr[0].size()){
        if(col % 2 == 0){
            for(int i = 0; i < arr.size(); i++){
                cout << arr[i][col] << " ";
            }
            col++;
        }else{
            for (int i = arr.size() - 1; i >= 0; i--){
                cout << arr[i][col] << " ";
            }
            col++;
        }
    }
}