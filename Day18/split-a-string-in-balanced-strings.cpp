#include<bits/stdc++.h>
using namespace std;

int balancedStringSplit(string s) {
    int cnt=0;
    int bal=0;

    for(int i=0; i<s.length(); i++){
        if(s[i] == 'R')
        bal++;
        else
        bal--;

        if(bal == 0)
        cnt++;
    }

    return cnt;
}

int main(){

return 0;
}