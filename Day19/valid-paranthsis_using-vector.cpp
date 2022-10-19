#include<bits/stdc++.h>
using namespace std;

bool isPair(char c1, char c2){
    if((c1 == '(' && c2 == ')') || (c1 == '{' && c2 == '}') || (c1 == '[' && c2 == ']'))
    return true;

    return false;
}

bool isValid(string s) {
    vector<char> v;

    for(int i=0; i<s.length(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        v.push_back(s[i]);
        else{
            if(!v.empty() && (isPair(v.back(), s[i])))
            v.pop_back();
            else{
                return false;
            }
            
        }
    }

    if(v.empty()){
        return true;
    }

    return false;
}

int main(){

return 0;
}