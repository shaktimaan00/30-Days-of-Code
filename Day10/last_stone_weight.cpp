#include<bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int>& arr) {
    priority_queue<int> pq;

    for(int i=0; i<arr.size(); i++)
    pq.push(arr[i]);

    while(pq.size() > 1){
        int num = pq.top();
        pq.pop();

        if(pq.top() == num)
        pq.pop();
        else{
            num -= pq.top();
            pq.pop();
            pq.push(num);
        }
    }

    if(pq.size() == 1)
    return pq.top();
    else
    return 0;
}

int main(){

    int n;
    cin >> n;
    vector<int> arr;

    while(n--){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    
    cout << lastStoneWeight(arr) << endl;
    
    
    return 0;
}