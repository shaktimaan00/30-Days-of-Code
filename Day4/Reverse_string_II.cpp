#include<bits/stdc++.h>
using namespace std;

string reverseStr(string &s, int k)
{
    if (k >= s.length())
    {
        reverse(s.begin(), s.end());
        return s;
    }

    int i = 0;
    int n = s.length();
    while (i < s.length())
    {
        if (s.length() - i >= k)
        {
            reverse(s.begin() + i, s.begin() + i + k);
        }
        else{
            reverse(s.begin()+i, s.begin()+n);
        }

        i += 2 * k;
    }

    return s;
}

int main(){

    string s = "hyzqyljrnigxvdtneasepfahmtyhlohwxmkqcdfehybknvdmfrfvtbsovjbdhevlfxpdaovjgunjqlimjkfnqcqnajmebeddqsgl";
    // string s = "fdcqkmxwholhytmhafpesaentdvxginrjlyqzyhehybknvdmfrfvtbsovjbdhevlfxpdaovjgunjqlimjkfnqcqnajmebeddqsgl";

    // cout << s.length();
    int k = 39;

    cout << reverseStr(s,k);

    return 0;
}