#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int i=0, j=0;
    int arr[256] = {0};
    int maxcnt = 0; 

    while( j<s.length()){
        arr[s[j]]++;

        while(arr[s[j]] > 1){
            arr[s[i]]--;
            i++;
        }

        maxcnt = max(maxcnt, j-i+1);
        j++;
    } 

    return maxcnt;   
}

int main(){



    return 0;
}