#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    vector<vector<int>> fans;
    set<int> s1;
    set<int> s2;

    for(auto i:nums1)
    s1.insert(i);

    for(auto i:nums2)
    s2.insert(i);

    vector<int> ans1;
    vector<int> ans2;

    for(auto i:s1){
        if(s2.find(i) == s2.end())
        ans1.push_back(i);
    }

    for(auto i:s2){
        if(s1.find(i) == s1.end())
        ans2.push_back(i);
    }

    fans.push_back(ans1);
    fans.push_back(ans2);

    return fans;
}

int main(){

    
    
    
    return 0;
}