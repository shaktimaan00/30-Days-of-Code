#include<bits/stdc++.h>
using namespace std;

int dominantIndex(vector<int>& arr) {
    int max = INT_MIN;
    int idx = -1;

    for(int i=0; i<arr.size(); i++){
        if(arr[i] > max){
            max = arr[i];
            idx = i;
        }
    }

    for(int i=0; i<arr.size(); i++){
        if(arr[i] != max && arr[i] > max/2){
            return -1;
        }
    }

    return idx;
}

int main(){

    
    
    
    
    return 0;
}