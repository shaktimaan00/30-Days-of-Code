#include<bits/stdc++.h>
using namespace std;

string makeGood(string s)
{
    stack<char> st;
    string ans;

    for (int i = 0; i < s.length(); i++)
    {
        if(!st.empty() && abs(st.top() - s[i]) == 32){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    if(ans.empty()){
        return "-1";
    }

    return ans;
}

int main(){

    string s;
    cin >> s;

    cout << makeGood(s) << endl;

    return 0;
}