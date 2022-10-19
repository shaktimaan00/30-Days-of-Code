#include<bits/stdc++.h>
using namespace std;

vector<string> findRelativeRanks(vector<int> arr) {
    map<int, int> mp;
    vector<string> ans;

    vector<int> arr1 = arr;
    sort(arr1.begin(), arr1.end(), greater<int>());
    
    for(int i=0; i<arr1.size(); i++){
        mp.insert({arr1[i], i});
    }
    
    for(int i=0; i<arr.size(); i++){
        if(mp[arr[i]] == 0)
        ans.push_back("Gold Medal");
        else if(mp[arr[i]] == 1)
        ans.push_back("Silver Medal");
        else if(mp[arr[i]] == 2)
        ans.push_back("Bronze Medal");
        else{
            int idx = mp[arr[i]];
            string s1 = to_string(idx+1);
            ans.push_back(s1);
        }
        
    }
    
    return ans;


}

int main(){

    



    return 0;
}