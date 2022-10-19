#include<bits/stdc++.h>
using namespace std;

int digitTonum(int x){
    int ans = 0;
    while(x != 0){
        ans += x%10;
        x = x/10;
    }

    return ans;
}

int countBalls(int lowLimit, int highLimit) {
    
    vector<int> arr(100001,0);

    for(int i=lowLimit; i<=highLimit; i++){
        int num = digitTonum(i);
        arr[num]++;
    }

    int maxi = INT_MIN;
    for(int i=0; i<100001; i++){
        maxi = max(maxi, arr[i]);
    }

    return maxi;

}

int main(){

return 0;
}