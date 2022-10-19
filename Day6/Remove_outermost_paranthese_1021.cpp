#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
    stack<char> st;
    string ans;

    for(int i=0; i<s.length(); i++){

        if(ans[ans.length()-1] == '(' && s[i] == ')'){
            ans += s[i];
        }
        else if(!st.empty() && (st.top() == '(' && s[i] == ')')){
            char c1 = st.top();
            st.pop();
            cout << st.size() << endl;
            char c2 = s[i];

            if(st.size() > 2){
                ans += st.top();
                st.pop();
            }
            else if(!st.empty()){
                ans += c1;
                ans += c2;
            }
        }
        else{
            st.push(s[i]);
        }
    }

    return ans;
}

int main(){

    string s = "(()())(())(()(()))";
    cout << removeOuterParentheses(s);


    return 0;
}