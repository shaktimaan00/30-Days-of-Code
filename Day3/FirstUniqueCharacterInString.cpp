#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
    int arr[26] = {0};
    string ans;
    for(int i=0; i<s.length(); i++){
        int x = s[i] - 'a';
        arr[x]++;
    }

    for(int i=0; i<26; i++){
        if(arr[i]==1){
            ans += (i+'a');
        }
    }

    if(ans.length() == 0)
    return -1;

    // cout << ans << endl;
    int j=0;    
    int idx = INT_MAX;
    while(j < ans.length()){
        for(int i=0; i<s.length(); i++){
            if(s[i] == ans[j]){
                idx = min(idx, i);
            }
        }
        j++;
    }



    return idx;
}

int main(){

    string s;
    cin >> s;

    cout << firstUniqChar(s);


    return 0;
}