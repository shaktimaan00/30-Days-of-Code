#include<bits/stdc++.h>
using namespace std;

int celebrity(vector<vector<int>> &M, int n)
{
    // code here
    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }

    while (s.size() > 1)
    {
        int a = s.top();
        s.pop();

        int b = s.top();
        s.pop();

        if (M[a][b] == 1)
            s.push(b);
        else
            s.push(a);
    }

    int ans = s.top();

    int zerocnt = 0;
    int onecnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (M[ans][i] == 0)
            zerocnt++;
    }

    if (zerocnt != n)
        return -1;

    for (int i = 0; i < n; i++)
    {
        if (M[i][ans] == 1)
            onecnt++;
    }

    if (onecnt != n - 1)
        return -1;

    return ans;
}

int main(){

    int n; cin >> n;

    vector<vector<int>> v(n);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> v[i][j];
        }
    }

    cout << celebrity(v,n);


    return 0;
}