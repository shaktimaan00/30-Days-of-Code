#include<bits/stdc++.h>
using namespace std;

int maxLengthBetweenEqualCharacters(string s)
{
    vector<int> arr(26, -1);
    int ans = -1;

    for (int i = 0; i < s.length(); i++)
    {
        int x = s[i] - 'a';
        if (arr[x] == -1)
        {
            arr[x] = i;
        }
        else
        {
            ans = max(ans, (i - arr[x]) - 1);
            // mp[s[i]] = i;
        }
    }
    return ans;
}

int main(){

return 0;
}