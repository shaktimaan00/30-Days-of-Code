#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
    vector<vector<int> > ans;
    map<int, int> mp;

    for(int i=0; i<items1.size(); i++){
        int x = items1[i][0];
        int y = items1[i][1];

        mp[x] += y;
    }

    for(int i=0; i<items2.size(); i++){
        int x = items2[i][0];
        int y = items2[i][1];

        mp[x] += y;
    }
    
    for(auto i:mp){
        vector<int> tmp;
        tmp.push_back(i.first);
        tmp.push_back(i.second);
        
        ans.push_back(tmp);
    }
    return ans;
}

int main(){



    return 0;
}