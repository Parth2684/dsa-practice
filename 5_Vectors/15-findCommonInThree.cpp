# include <iostream>
# include <vector>
# include <unordered_map>
# include <set>

using namespace std;

vector <int> commonElements (vector<int> arr, vector<int> brr, vector<int> crr) {
    vector<int> ans;
    set <int> st;
    int i,j,k;
    i=j=k=0;
    while (i < arr.size() && j < brr.size() && k < crr.size()) {
        if(arr[i] == brr[j] && brr[j] == crr[k]) {
            st.insert(arr[i]);
            i++;
            j++;
            k++;
        }else if(arr[i] < brr[j]){
            i++;
        }else if(brr[j] < crr[k]){
            j++;
        }else{
            k++;
        }
    }

    for (auto i : st) {
        ans.push_back(i);
    }
    return ans;
}

int main(){
    vector<int> arr { 1, 5, 10, 20, 20, 30 };
    vector<int> brr {5, 13, 15, 20, 20};
    vector<int> crr{5, 20, 20};

   vector<int> repeat = commonElements(arr, brr, crr) ;
   for (int i = 0; i < repeat.size(); i++) {
        cout << repeat[i] << " ";
   }
}


