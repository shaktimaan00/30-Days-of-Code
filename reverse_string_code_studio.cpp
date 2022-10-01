#include<bits/stdc++.h>
using namespace std;

string reverseString(string& str)
{
    stack<char> s;
    string ans;
    
    for(int i=0; i<str.length(); i++){
        s.push(str[i]);
    }
    
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}

int main(){

    string str;
    cin >> str;

    cout << reverseString(str) << endl;

    return 0;
}