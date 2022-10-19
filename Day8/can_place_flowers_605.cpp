#include<bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int> &arr, int n)
{

    int cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        bool left = false;
        bool right = false;
        if (arr[i] == 0)
        {
            if (i == 0 || arr[i - 1] == 0)
                left = true;

            if (i == arr.size() - 1 || arr[i + 1] == 0)
                right = true;

            if (left && right)
            {
                arr[i] = 1;
                cnt++;

                if (cnt == n)
                    return true;
            }
        }
    }

    return cnt >= n;
}

int main(){

    // int n; cin >> n;
    vector<int> arr = {1,0,0,0,1};

    cout << canPlaceFlowers(arr,1);

return 0;
}