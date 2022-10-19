#include<bits/stdc++.h>
using namespace std;

vector<bool> prefixesDivBy5(vector<int>& nums) {
    long long int ans = 0;
    vector<bool> arr;
    
    for(int i=0; i<nums.size(); i++){
        ans = (ans*2 + nums[i])%5;

        arr.push_back(ans == 0);

    }

    return arr;
}

int main(){

    int n; cin >> n;
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    vector<bool> ans = prefixesDivBy5(nums);

    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    
    
    
    
    return 0;
}