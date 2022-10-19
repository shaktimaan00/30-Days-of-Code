#include<bits/stdc++.h>
using namespace std;

int findLengthOfLCIS(vector<int> &nums)
{
    int len = 1;
    int maxlen = 1;

    int j = 0;

    while (j < nums.size() - 1)
    {
        if (nums[j] < nums[j + 1])
        {
            j++;
            len++;
            maxlen = max(maxlen, len);
        }
        else
        {
            j++;
            len = 1;
        }
    }
    return maxlen;
}

int main(){

return 0;
}