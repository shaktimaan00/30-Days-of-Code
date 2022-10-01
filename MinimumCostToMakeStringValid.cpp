#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
int findMinimumCost(string str)
{
    int open = 0, close = 0;
    if (str.length() % 2 == 1)
        return -1;

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '{')
            s.push(str[i]);
        else
        {
            if (!s.empty() && s.top() == '{')
                s.pop();
            else
                s.push(str[i]);
        }
    }

    while (!s.empty())
    {
        if (s.top() == '{')
        {
            open++;
            s.pop();
        }
        else
        {
            close++;
            s.pop();
        }
    }

    int ans = (open + 1) / 2 + (close + 1) / 2;

    return ans;
}

int main(){

    string s;
    cin >> s;

    cout << findMinimumCost(s);


    return 0;
}