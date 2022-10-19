#include<bits/stdc++.h>
using namespace std;

bool isBoomerang(vector<vector<int>>& arr) {
    if((arr[2][1] - arr[0][1])*(arr[1][0] - arr[0][0]) == (arr[2][0] - arr[0][0])*(arr[1][1] - arr[0][1]))
    return false;

    return true;
}

int main(){

    vector<vector<int>> arr;

    cout << isBoomerang(arr);   
    
    return 0;
}