# include <iostream>
# include <vector>
# include <unordered_map>

using namespace std;

int firstRepeat (vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++){
            if(arr[i] == arr[j]) {
                return i + 1;
            }
        }
    }
    return -1;
}

int optimisedWayHash (vector <int> arr) {
    unordered_map<int, int> hash;
    for (int i =0; i < arr.size(); i++) {
        hash[arr[i]]++;
    }

    for (int i = 0; i <arr.size(); i++) {
        if(hash[arr[i]] > 1) {
            return i+1;
        }
    }
    return -1;
}

int withoutUnorderedMap (vector<int> arr) {
    vector <int> hash(arr.size()-1, 0);
    for (int i = 0; i < arr.size(); i++) {
        hash[arr[i]]++;
    }
    for (int i = 0; i < hash.size(); i++) {
        if(hash[i]> 1) {
            return i;
        }

    }
    return -1;
}

int main() {
    vector <int> arr {1, 2, 3, 4, 5, 6, 2, 3};
    int repeat = firstRepeat(arr);
    int optimisedHash = optimisedWayHash(arr);
    int withoutUnorderMap = withoutUnorderedMap(arr);

    cout << repeat << endl;
    cout << optimisedHash << endl;
    cout << withoutUnorderMap << endl;
}