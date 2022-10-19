#include<bits/stdc++.h>
using namespace std;

string defangIPaddr(string &s)
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            s.insert(s.begin() + i, '[');
            i++;
            s.insert(s.begin() + (i + 1), ']');
        }
    }
    return s;
}

int main(){

return 0;
}