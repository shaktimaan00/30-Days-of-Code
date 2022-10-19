#include<bits/stdc++.h>
using namespace std;

int square(int n){
    int ans = 0;

    while(n != 0){
        ans += pow(n%10,2);
        n /= 10;
    }
    return ans;
}

bool isHappy(int n) {
    int slow = n;
    int fast = n;

    do{
        slow = square(slow);
        fast = square(square(fast));
    }while(slow != fast);

    if(slow == 1)
    return true;


    return false;


}

int main(){

return 0;
}