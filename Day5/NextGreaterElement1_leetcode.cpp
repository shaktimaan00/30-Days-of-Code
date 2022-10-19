#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans(nums1.size());

    for(int i=0; i<nums1.size(); i++){
        stack<int> s;
        int j = nums2.size()-1;

        while(nums2[j] != nums1[i] && j >= 0){
            s.push(nums2[j]);
            j--;
        }

        while(!s.empty() && s.top() <= nums1[i]){
            s.pop();
        }

        if(s.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = s.top();
        }
    }

    return ans;
}

int main(){

    vector<int> a = {2,4};
    vector<int> b = {1,2,3,4};

    vector<int> ans = nextGreaterElement(a,b);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }cout << endl;

    return 0;
}