#include<bits/stdc++.h>
using namespace std;

int minOperations(vector<string> &logs)
{
    int x = 0;

    for (int i = 0; i < logs.size(); i++)
    {
        if (logs[i][0] == '.' && logs[i][1] == '/')
        {
            x += 0;
        }
        else if (logs[i][0] == '.' && logs[i][1] == '.')
        {
            if (x > 0)
            {
                x--;
            }
        }
        else
        {
            x++;
        }
    }

    return x;
}

int main(){
    int n;
    cin >> n;

    vector<string> arr;
    
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        arr.push_back(s);
    }

    int ans = minOperations(arr);

    cout << ans << endl;

    
    return 0;
}