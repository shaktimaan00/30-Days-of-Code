#include<bits/stdc++.h>
using namespace std;

void InsertAtBottom(stack<int>& s, int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    
    int num = s.top();
    s.pop();
    
    InsertAtBottom(s,x);
    s.push(num);
}

void reverseStack(stack<int> &s) {
    if(s.empty()){
        return;
    }
    
    int num = s.top();
    s.pop();
    
    reverseStack(s);
    InsertAtBottom(s, num);
}

int main(){

    stack<int> s;
    int n; 
    cin >> n;

    for(int i=0; i<n; i++){
        int x; cin >> x;
        s.push(x);
    }

    reverseStack(s);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }


    return 0;
}