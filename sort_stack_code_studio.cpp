#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
void sortedinsert(stack<int> &s, int num)
{
    if (s.empty() || (!s.empty() && s.top() < num))
    {
        s.push(num);
        return;
    }

    int x = s.top();
    s.pop();

    sortedinsert(s, num);
    s.push(x);
}

void sortStack(stack<int> &s)
{
    if (s.empty())
        return;

    int num = s.top();
    s.pop();

    sortStack(s);
    sortedinsert(s, num);
}

int main(){

    stack<int> s;
    int n; cin >> n;

    for(int i=0; i<n; i++){
        int x; cin >> x;
        s.push(x);
    }

    sortStack(s);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}