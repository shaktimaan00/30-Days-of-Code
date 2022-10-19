#include<bits/stdc++.h>
using namespace std;

int hardestWorker(int n, vector<vector<int>>& logs) {
    vector<int> diff;
    vector<int> idxarr;
    int idx = INT_MAX;
    int minidx= n;

    diff.push_back(logs[0][1]);

    for(int i=1; i<logs.size(); i++){
        diff.push_back(logs[i][1] - logs[i-1][1]); 
    }

    int max = *max_element(diff.begin(), diff.end());

    for(int i=0; i<diff.size(); i++){
        if(diff[i] == max){
            idxarr.push_back(logs[i][0]);
        }
    }

    return *min_element(idxarr.begin(), idxarr.end());
}

int main(){

return 0;
}