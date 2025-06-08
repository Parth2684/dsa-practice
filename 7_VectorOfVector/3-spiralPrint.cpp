# include <iostream>
# include <vector>

using namespace std;

vector <int> spiralPrint (vector<vector <int> > arr) {
    int m = arr.size();
    int n = arr[0].size();
    int rowStart = 0;
    int rowEnd = arr.size() - 1;
    int colStart = 0;
    int colEnd = arr[0].size() - 1;
    int totalElements = m * n;
    vector<int> ans;
    while (totalElements > 0) {
        for (int i = colStart; i <= colEnd && totalElements > 0; i++){
            ans.push_back(arr[rowStart][i]);
            totalElements--;
        }
        rowStart++;
        for (int i = rowStart; i <= rowEnd && totalElements > 0; i++){
            ans.push_back(arr[i][colEnd]);
            totalElements--;
        }
        colEnd--;
        for (int i = colEnd; i >= colStart && totalElements > 0; i--) {
            ans.push_back(arr[rowEnd][i]);
            totalElements--;
        }
        rowEnd--;
        for (int i = rowEnd; i >= rowStart && totalElements > 0; i--){
            ans.push_back(arr[i][colStart]);
            totalElements--;
        }
        colStart++;
    }
    return ans;
}

int main() {
    vector<vector<int> > arr {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    vector<int> ans = spiralPrint(arr);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

}