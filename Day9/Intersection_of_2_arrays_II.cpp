#include<bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    vector<int> ans;

    int i = nums1.size() - 1, j = nums2.size() - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] == nums2[j])
        {
            ans.push_back(nums1[i]);
            j--;
            i--;
            nums1.pop_back();
            nums2.pop_back();
        }
        else if (nums1[i] > nums2[j])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    return ans;
}

int main(){

    int n, m;
    cin >> n >> m;

    vector<int> nums1, nums2;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums1.push_back(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        nums2.push_back(x);
    }

    vector<int> ans = intersect(nums1, nums2);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}