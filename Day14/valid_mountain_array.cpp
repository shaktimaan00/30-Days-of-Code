#include<bits/stdc++.h>
using namespace std;

bool validMountainArray(vector<int>& arr) {
    int k = 0;

    if(arr.size() < 3)
    return false;

    for(int i=0; i<arr.size(); i++){
        if(arr[i] == arr[i+1])
        return false;
        else if(arr[i+1] > arr[i])
        k++;
        else{
            break;
        }
    }

    if(k==0 || k == arr.size()-1)
    return false;

    for(int j=k; j<arr.size()-1; j++){
        if(arr[j] <= arr[j+1])
        return false;
    }

    return true;
}

int main(){

    
    
    
    
    return 0;
}