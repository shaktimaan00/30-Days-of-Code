#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n)
{
    vector<int> arr(n + 1);

    arr[0] = 1;
    arr[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        if (i == n)
            return arr[i];
    }

    return 1;
}

int main(){

return 0;
}