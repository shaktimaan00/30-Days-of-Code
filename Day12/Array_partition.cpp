#include<bits/stdc++.h>
using namespace std;

int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int total = 0;

    for(int i=0; i<nums.size(); i+=2){
        total += min(nums[i], nums[i+1]);
    }

    return total;
}

int main(){

    
    
    
    
    return 0;
}