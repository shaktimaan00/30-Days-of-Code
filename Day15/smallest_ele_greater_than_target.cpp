#include<bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char> &arr, char target)
{
    char curr;
    char min = '{';
    for (int i = 0; i < arr.size(); i++)
    {
        curr = arr[i];

        if (curr > target && curr < min)
            min = curr;
    }

    if (min == '{')
        return arr[0];

    return min;
}

int main(){

return 0;
}