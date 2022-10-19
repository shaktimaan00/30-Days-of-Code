#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    vector<int>::iterator it;
    int n1 = nums.size();

    int i = 0;

    while (i + 1 < nums.size())
    {
        if (nums[i] == nums[i + 1])
        {
            it = nums.begin() + (i + 1);
            nums.erase(it);
        }
        else
        {
            i++;
        }
    }

    int n2 = nums.size();
    int diff = n1 - n2;

    while (diff--)
    {
        nums.push_back(0);
    }

    return n2;
}

int main(){

return 0;
}