#include<bits/stdc++.h>
using namespace std;

int largestPerimeter(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    int maxperi = 0;
    
    for(int i=n-1; i>=2; i--){
        int curr = 0;
        if(nums[i] < nums[i-1]+nums[i-2])
        curr = nums[i]+nums[i-1]+nums[i-2];

        maxperi = max(maxperi, curr);
    }

    return maxperi;
    
}

int main(){

    
    
    return 0;
}