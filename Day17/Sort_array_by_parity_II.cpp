#include<bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParityII(vector<int>& nums) {
    vector<int> odd;
    vector<int> even;

    for(int i=0; i<nums.size(); i++){
        if(nums[i]%2==0 && i%2==1){
            odd.push_back(i);
        }
        if(nums[i]%2==1 && i%2==0){
            even.push_back(i);
        }
    }

    int i=0;

    while(i<odd.size()){
        swap(nums[odd[i]], nums[even[i]]);
        i++;
    }
    
    return nums;

}

int main(){

return 0;
}