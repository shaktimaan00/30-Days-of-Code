#include<bits/stdc++.h>
using namespace std;


vector<int> prevsmaller(vector<int> arr, int n)
{
    vector<int> v(n);
    stack<int> s;
    s.push(-1);

    for (int i = 0; i < n; i++)
    {
        while (s.top() != -1 && arr[s.top()] >= arr[i])
            s.pop();
        v[i] = s.top();
        s.push(i);
    }
    return v;
}

vector<int> nextsmaller(vector<int> arr, int n)
{
    vector<int> v(n);
    stack<int> s;
    s.push(-1);

    for (int i = n - 1; i >= 0; i--)
    {
        while (s.top() != -1 && arr[s.top()] >= arr[i])
            s.pop();
        v[i] = s.top();
        s.push(i);
    }
    return v;
}

int largestRectangleArea(vector<int> &heights)
{
    int n = heights.size();

    vector<int> prev(n);
    prev = prevsmaller(heights, n);

    vector<int> next(n);
    next = nextsmaller(heights, n);

    int area = 0, maxarea = 0;

    for (int i = 0; i < n; i++)
    {
        int l = heights[i];

        if (next[i] == -1)
            next[i] = n;

        int b = next[i] - prev[i] - 1;

        area = l * b;
        maxarea = max(maxarea, area);
    }

    return maxarea;
}

void display(vector<int> arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = largestRectangleArea(arr);

    cout << ans << endl;

    // display(ans, n);

    return 0;
}