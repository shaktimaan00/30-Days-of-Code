#include<bits/stdc++.h>
using namespace std;

vector<string> summaryRanges(vector<int>& nums) {
    vector<string> ans;

    int i=0, j=0;

    while(j < nums.size()){
        while(nums[j] == nums[j+1]-1)
        j++;

        if(i != j){
            string s;
            s.push_back(nums[i]+'0');
            s.push_back('-');
            s.push_back('>');
            s.push_back(nums[j]+'0');
            ans.push_back(s);
            // cout << s << endl;
        }
        else{
            string s;
            s += (nums[i]+'0');
            ans.push_back(s);
            // cout << s << endl;
        }

        // cout << i << " " << j << endl;

        j++;
        i=j;

        // cout << i << " " << j << endl;
    }
    return ans;
}

int main(){

    vector<int> nums = {0,1,2,4,5,7};

    // summaryRanges(nums);

    int x = -1;

    string ans, s1 = "45";

    string a = to_string(x);

    // cout << a+'a';
    s1 += a;
    cout << s1 << endl;


    return 0;
}