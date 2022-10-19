#include<bits/stdc++.h>
using namespace std;

bool findSubarrays(vector<int> &arr)
{
    vector<long long> ans;
    map<long long, long long> mp;
    long long k = 2, sum = 0;

    long long i = 0, j = 0;

    while (k--)
    {
        sum += arr[j];
        j++;
    }
    ans.push_back(sum);

    while (j < arr.size())
    {
        sum += arr[j];
        j++;
        sum -= arr[i];
        i++;

        ans.push_back(sum);
    }

    for (auto i : ans)
        mp[i]++;

    for (auto i : mp)
        if (i.second >= 2)
            return true;

    return false;
}

int main(){

return 0;
}