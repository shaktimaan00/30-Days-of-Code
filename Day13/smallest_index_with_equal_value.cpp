#include<bits/stdc++.h>
using namespace std;

int smallestEqual(vector<int> &nums){
    int ans = -1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 10 == nums[i])
        {
            ans = i;
            break;
        }
    }
    return ans;
}

int main(){

    
    
    
    
    
    
    return 0;
}