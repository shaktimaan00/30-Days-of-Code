#include<bits/stdc++.h>
using namespace std;

int minDeletions(string s) {
    int cnt = 0;

    int arr[26] = {0};
    int ans[100001] = {0};

    for(int i=0; i<s.length(); i++){
        arr[s[i]-'a']++;
    }

    sort(arr,arr+26, greater<int>());

    // for(int i=0; i<26; i)

    for(int i=0; i<26; i++){
        int x = arr[i];
        if(ans[x] == 0)
            ans[x] = x;
        else{
            while(x>0){
                cout << x << " " << ans[x] << endl;
                if(ans[x] != 0){
                    x--;
                    cnt++;
                }else{
                    break;
                }
            }

            if(x > 0){
                ans[x] = x;
            }
        }
    }

    return cnt;
}


int main(){

return 0;
}