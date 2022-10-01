#include<bits/stdc++.h>
using namespace std;

// #include<bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int> v(n);
    stack<int> s;
    s.push(-1);
    
    for(int i=n-1; i>=0; i--){
        while(s.top() >= arr[i])
            s.pop();
        v[i] = s.top();
        s.push(arr[i]);
        
    }
    return v;
    
}

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    vector<int> ans;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    ans = nextSmallerElement(arr, n);

    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}