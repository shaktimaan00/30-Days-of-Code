#include<bits/stdc++.h>
using namespace std;

int calPoints(vector<string> &arr)
{
    stack<int> s;
    int total = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == "D")
        {
            int num = 2 * s.top();
            s.push(num);
        }
        else if (arr[i] == "C")
        {
            s.pop();
        }
        else if (arr[i] == "+")
        {
            int x = s.top();
            s.pop();
            int num = x + s.top();
            s.push(x);
            s.push(num);
        }
        else
        {
            int num = stoi(arr[i]);
            s.push(num);
        }
    }

    while (!s.empty())
    {
        total += s.top();
        s.pop();
    }

    return total;
}

int main(){

    vector<string> arr;

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        string s;
        cin >> s;

        arr.push_back(s);
    }

    cout << calPoints(arr);
    

    return 0;
}