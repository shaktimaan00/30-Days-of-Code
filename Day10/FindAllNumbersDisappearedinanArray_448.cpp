#include<bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    vector<int> ans;

    set<int> s(nums.begin(), nums.end());

    int i = 1;

    while (i <= nums.size())
    {
        if (s.find(i) == s.end())
            ans.push_back(i);
        i++;
    }

    return ans;
}

int main(){

    int n;
    cin >> n;

    vector<int> nums;

    for(int i=0; i<n; i++){
        int x; cin >> x;
        nums.push_back(x);
    }

    vector<int> ans = findDisappearedNumbers(nums);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }cout << endl;

    return 0;
}