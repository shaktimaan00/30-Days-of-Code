#include<bits/stdc++.h>
using namespace std;

int findJudge(int n, vector<vector<int>> &arr)
{
    int judge = -1;
    int mp[1001][2] = {0, 0};

    if (arr.size() == 0 && n == 1)
        return 1;
    else if (arr.size() == 0 && n > 1)
        return -1;

    for (int i = 0; i < arr.size(); i++)
    {
        int first = arr[i][0];
        int second = arr[i][1];

        mp[first][0]++;
        mp[second][1]++;
    }

    for (int i = 0; i <= 1000; i++)
    {
        if (mp[i][0] == 0 && mp[i][1] == n - 1)
            return i;
    }

    return -1;
}

int main(){

return 0;
}