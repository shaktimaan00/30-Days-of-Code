#include<bits/stdc++.h>
using namespace std;

int minTimeToVisitAllPoints(vector<vector<int>>& arr) {
    int ans = 0;
    
    for(int i=1; i<arr.size(); i++){
        int x = abs(arr[i][0] - arr[i-1][0]);
        int y = abs(arr[i][1] - arr[i-1][1]);
        
        ans += max(x,y);
    }
    
    return ans;
}

int main(){

return 0;
}