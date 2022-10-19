#include<bits/stdc++.h>
using namespace std;

int countSegments(string s)
{
    int i = 0, cnt = 0;
    while (i < s.length())
    {
        string ans = "";
        while (i < s.length() && s[i] != ' ')
        {
            ans += s[i];
            i++;
        }

        i++;

        if (ans.length() != 0)
            cnt++;
    }

    return cnt;
}

int main(){

    string s;
    cin >> s;

    cout << countSegments(s) << endl;
    
    
    
    return 0;
}