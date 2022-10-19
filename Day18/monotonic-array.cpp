#include<bits/stdc++.h>
using namespace std;

bool isMonotonic(vector<int> &nums)
{
    bool increasing = true;
    bool decreasing = true;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
            increasing = false;

        if (nums[i] < nums[i + 1])
            decreasing = false;

        if (increasing == false && decreasing == false)
            return false;
    }

    return true;
}

int main(){

return 0;
}