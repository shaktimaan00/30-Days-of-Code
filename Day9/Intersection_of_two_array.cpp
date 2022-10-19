#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> s1(nums1.begin(), nums1.end());
    set<int> s2(nums2.begin(), nums2.end());
    vector<int> ans;
    
    for(auto it:s1){
        if(s2.find(it) != s2.end())
            ans.push_back(it);
    }
    return ans;
}

int main(){

    int n,m;
    cin >> n >> m;

    vector<int> nums1, nums2;

    for(int i=0; i<n; i++){
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

    vector<int> ans = intersection(nums1, nums2);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " "; 
    }cout << endl;

    return 0;
}