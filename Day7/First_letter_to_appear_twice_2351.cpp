#include<bits/stdc++.h>
using namespace std;

char repeatedCharacter(string s) {
    int arr[26] = {0};
    string str;

    for(int i=0; i<s.length(); i++){
        arr[s[i]-'a']++;
    }

    for(int i=0; i<26; i++){
        if(arr[i] >= 2){
            str += (i+'a');
        }
    }

    int j=0;
    int idx = INT_MAX;

    while(j < str.length()){
        int cnt = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == str[j]){
                cnt++;
                if(cnt == 2){
                    idx = min(idx, i);
                    break;
                }
            }
        }
        j++;
    }

    return s[idx];
}

int main(){

    string s;
    cin >> s;

    cout << repeatedCharacter(s) << endl;

    return 0;
}