#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &arr, int count, int N)
{
    // base case
    cout << (N/2);
    if (count == ceil(N / 2))
    {
        arr.pop();
        return;
    }

    int num = arr.top();
    arr.pop();

    solve(arr, count + 1, N);
    arr.push(num);
}

void deleteMiddle(stack<int> &arr, int N)
{
    solve(arr, 0, N);
}

int main(){

    stack<int> st;
    int n; 
    cin >> n;

    for(int i=0; i<=n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    deleteMiddle(st, n);
    
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}