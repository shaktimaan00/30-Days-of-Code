#include <bits/stdc++.h> 
using namespace std;

void reverse(queue < int > & q) {
    // Write your code here.
    stack<int> s;
    
    while(!q.empty()){
        int ele = q.front();
        q.pop();
        
        s.push(ele);
    }
    
    while(!s.empty()){
        int ele = s.top();
        s.pop();
        q.push(ele);
    }
}

void reverseq(queue<int>& q){

}

int main(){

    int n; 
    cin >> n;

    queue<int> q;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;

        q.push(x);
    }

    reverse(q);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    // cout << q.size();
    // cout << q.rear();



    return 0;
}