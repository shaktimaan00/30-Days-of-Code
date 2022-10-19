#include<bits/stdc++.h>
using namespace std;

vector<string> makestring(string s)
{
    vector<string> final;
    int i = 0;
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
            final.push_back(ans);
    }
    return final;
}

vector<string> uncommonFromSentences(string s1, string s2)
{
    vector<string> ans;
    map<string, int> mp1;
    map<string, int> mp2;

    vector<string> v1 = makestring(s1);
    vector<string> v2 = makestring(s2);

    for (auto i : v1)
    {
        mp1[i]++;
    }

    for (auto i : v2)
    {
        mp2[i]++;
    }

    for (auto i : mp1)
    {
        if (mp2.find(i.first) == mp2.end() && i.second == 1)
            ans.push_back(i.first);
    }

    for (auto i : mp2)
    {
        if (mp1.find(i.first) == mp1.end() && i.second == 1)
            ans.push_back(i.first);
    }

    return ans;
}

int main(){

    string s1, s2;
    cin >> s1;
    cin >> s2;

    vector<string> ans = uncommonFromSentences(s1, s2);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }cout << endl;   


    return 0;
}