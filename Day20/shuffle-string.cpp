#include<bits/stdc++.h>
using namespace std;

string restoreString(string s, vector<int>& arr) {
    int n = s.length();
    string ans;
    
    vector<char> v(n,0);
    
    for(int i=0; i<n; i++){
        v[arr[i]] = s[i];
    }
    
    for(int i=0; i<n; i++){
        ans += v[i];
    }
    
    return ans;
    
}

int main(){

return 0;
}