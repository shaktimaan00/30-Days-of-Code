#include<bits/stdc++.h>
using namespace std;

int countHillValley(vector<int> &nums)
{
    int j = 0;

    // while(i < nums.size()-1){
    //     if(nums[i] == nums[i+1]){
    //         nums.erase(nums.begin()+i+1);
    //     }
    //     else{
    //         i++;
    //     }
    // }

    int cnt = 0;

    for (int i = 1; i < nums.size() - 1; i++)
    {
        if ((nums[i] > nums[j] && nums[i] > nums[i + 1]) || (nums[i] < nums[j] && nums[i] < nums[i + 1]))
        {
            cnt++;
            j = i;
        }
    }
    return cnt;
}

int main(){

return 0;
}