#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
void solve(stack<int>& s, int x){
    //base case
    if(s.empty()){
        s.push(x);
        return;
    }
    
    int num = s.top();
    s.pop();
    
    solve(s,x);
    s.push(num);
}

stack<int> pushAtBottom(stack<int>& s, int x) 
{
    solve(s,x);   
    return s;
}

int main(){

    stack<int> s;
    int n; cin >> n;

    int x;
    cin >> x;

    for(int i=0; i<n; i++){
        int x; cin >> x;
        s.push(x);
    }

    stack<int> ans = pushAtBottom(s,x);

    while(!ans.empty()){
        cout << ans.top() << " ";
        ans.pop();
    }

    return 0;
}





















