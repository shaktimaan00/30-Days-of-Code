#include<bits/stdc++.h>
using namespace std;

string licenseKeyFormatting(string s, int k) {
    string ans;
    int cnt = 0;
    for(int i=s.length()-1; i>=0; i--){
        if(s[i] != '-'){
            if(ans.length() % (k+1) == k)
            ans.push_back('-');

            ans += toupper(s[i]);
        } 
    }  
    reverse(ans.begin(), ans.end());

    return ans;  
}

int main(){

    string s;
    cin >> s;

    int k;
    cin >> k;

    cout << licenseKeyFormatting(s,k) << endl;


    return 0;
}