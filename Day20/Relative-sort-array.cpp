#include<bits/stdc++.h>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    int arr[1001] = {0};
    vector<int> v;
    
    for(int i=0; i<arr1.size(); i++){
        arr[arr1[i]]++;
    }
    
    for(int i=0; i<arr2.size(); i++){
        while(arr[arr2[i]] > 0){
            v.push_back(arr2[i]);
            arr[arr2[i]]--;
        }
    }
    
    for(int i=0; i<1001; i++){
        while(arr[i] > 0){
            v.push_back(i);
            arr[i]--;
        }
    }
    
    return v;
}

int main(){

return 0;
}