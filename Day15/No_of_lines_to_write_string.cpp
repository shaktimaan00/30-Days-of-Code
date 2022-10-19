#include<bits/stdc++.h>
using namespace std;

vector<int> numberOfLines(vector<int> &arr, string s)
{
    int sum = 0;
    int cnt = 1;
    vector<int> ans;

    for (int i = 0; i < s.length(); i++)
    {
        int x = s[i] - 'a';
        if (sum + arr[x] > 100)
        {
            cnt++;
            sum = arr[x];
        }
        else
        {
            sum += arr[x];
        }
    }

    ans.push_back(cnt);
    ans.push_back(sum);

    return ans;
}

int main(){

return 0;
}