#include<bits/stdc++.h>
using namespace std;

vector<int> findErrorNums(vector<int> &nums)
{
    map<int, int> mp;
    vector<int> ans;

    sort(nums.begin(), nums.end());

    int total = (nums.size() * (nums.size() + 1)) / 2;
    int duplicate = -1;

    for (auto i : nums)
        mp[i]++;

    for (auto i : mp)
    {
        if (i.second == 2)
            duplicate = i.first;

        total -= i.first;
    }
    ans.push_back(duplicate);
    ans.push_back(total);

    return ans;
}

int main(){





    return 0;
}