#include<bits/stdc++.h>
using namespace std;

int heightChecker(vector<int>& arr) {
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0; i<arr.size(); i++){
        pq.push(arr[i]);
    }

    int i=0;
    int cnt = 0;
    while(!pq.empty() && i<arr.size()){
        if(pq.top() != arr[i]){
            cout << pq.top() << " " << arr[i] << endl;
            cnt++;
        }
        pq.pop();
        i++;
    }

    return cnt;
}

int main(){

    vector<int> arr = {1, 1, 4, 2, 1, 3};

    cout << heightChecker(arr);

    return 0;
}