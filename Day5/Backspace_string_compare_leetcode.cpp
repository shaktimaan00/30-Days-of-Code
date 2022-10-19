#include<bits/stdc++.h>
using namespace std;

bool backspaceCompare(string s, string t) {
    string a;
    string b;

    for(int i=0; i<s.length(); i++){
        if(s[i] != '#')
        a.push_back(s[i]);
        else if(!a.empty() && s[i] == '#')
        a.pop_back();
    }
    // cout << a << endl;

    for(int i=0; i<t.length(); i++){
        if (t[i] != '#')
            b.push_back(t[i]);
        else if (!b.empty() && t[i] == '#')
            b.pop_back();
    }
    // cout << b << endl;

    if(a == b)
    return true;

    return false;
}

int main(){

    string a;
    string b;

    cin >> a >> b;

    cout << backspaceCompare(a,b);  
       
    return 0;
}