#include<bits/stdc++.h>
using namespace std;

int distributeCandies(vector<int>& arr) {
    int n = arr.size();
    
    int x = n/2;
    unordered_set<int> s;

    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }

    int y = s.size();

    return min(x,y);
}


int main(){

    int n;
    cin >> n;

    vector<int> arr;

    for(int i=0; i<n; i++){
        int x; cin >> x;
        arr.push_back(arr[i]);
    }

    int ans = distributeCandies(arr);

    cout << ans << endl;

    return 0;
}