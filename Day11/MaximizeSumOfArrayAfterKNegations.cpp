#include<bits/stdc++.h>
using namespace std;

int Sum(vector<int> arr){
    int sum = 0;
    for(int i=0; i<arr.size(); i++)
    sum += arr[i];

    return sum;
}

int largestSumAfterKNegations(vector<int>& nums, int k) {
    int allneg = 0;

    sort(nums.begin(), nums.end());

    for(int i=0; i<nums.size(); i++){
        if(nums[i] <= 0)
        allneg++;
    }

    // cout << allneg << endl;

    if(allneg == 0 || allneg == 1){
        // cout << "in" << endl;
        if(k%2 == 0){
            return Sum(nums);
        }
        else{
            // cout << "in" << endl;
            int min = INT_MAX;
            int idx = -1;

            for(int i=0; i<nums.size(); i++){
                if(nums[i] != 0 && nums[i] < min){
                    min = nums[i];
                    idx = i;
                }

            }

            nums[idx] = -nums[idx];
            
        }
    }
    else if(allneg >= k){
        cout << "in" << endl;

        for(int i=0; i<k; i++)
        nums[i] = -nums[i];
    }
    else if(allneg < k){
        k = k%allneg;

        for(int i=0; i<k; i++)
        nums[i] = -nums[i];
    }
    return Sum(nums);
}

int main(){

    vector<int> nums = {-4, -6, 9, -2, 2};
    int k = 4;

    cout << largestSumAfterKNegations(nums, k);




return 0;
}