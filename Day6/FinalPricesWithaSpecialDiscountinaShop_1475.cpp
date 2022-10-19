#include<bits/stdc++.h>
using namespace std;

vector<int> finalPrices(vector<int> &arr)
{
    int n = arr.size();
    vector<int> next(n);
    vector<int> ans(n);
    stack<int> s;
    s.push(0);

    for (int i = n - 1; i >= 0; i--)
    {
        while (s.top() > arr[i])
        {
            s.pop();
        }

        next[i] = s.top();
        s.push(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        ans[i] = arr[i] - next[i];
    }

    return ans;
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];        
    }

    vector<int> ans = finalPrices(arr);

    for (int i = 0; i < n; i++)
    {
        cout << ans[i]<< " " ;
    }

    return 0;
}