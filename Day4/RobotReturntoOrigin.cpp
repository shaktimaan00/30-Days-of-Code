#include<bits/stdc++.h>
using namespace std;

bool judgeCircle(string s)
{
    int x = 0, y = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
            x--;
        else if (s[i] == 'R')
            x++;
        else if (s[i] == 'U')
            y++;
        else
            y--;
    }

    if (x == 0 && y == 0)
        return true;

    return false;
}

int main(){

    string str;
    cin >> str;  

    cout << judgeCircle(str); 
    
    
    
    return 0;
}