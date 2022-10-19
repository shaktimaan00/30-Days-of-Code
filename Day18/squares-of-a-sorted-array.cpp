#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    vector<int> ans;
    int i=0, j=nums.size()-1;

    while(i<=j){
        if(abs(nums[j]) >= abs(nums[i])){
            ans.push_back(nums[j]*nums[j]);
            j--;
        }
        else{
            ans.push_back(nums[i]*nums[i]);
            i++;
        }
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main(){

return 0;
}