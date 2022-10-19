#include<bits/stdc++.h>
using namespace std;

int countWords(vector<string>& words1, vector<string>& words2) {
    map<string, int> mp1;
    map<string, int> mp2;
    int cnt = 0;

    for(auto i:words1){
        mp1[i]++;
    }

    for(auto i:words2){
        mp2[i]++;
    }

    for(auto i:mp1){
        if(mp2.find(i.first) != mp2.end()){
            if(mp2[i.first] == 1 && i.second == 1){
                cnt++;
            }
        }
    }
    return cnt;
}    

int main(){

    int n, m;
    cin >> n >> m;

    vector<string> nums1, nums2;

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        nums1.push_back(x);
    }

    for (int i = 0; i < m; i++)
    {
        string x;
        cin >> x;
        nums2.push_back(x);
    }

    int ans = countWords(nums1, nums2);

    cout << ans << endl;

    return 0;
}