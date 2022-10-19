#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int i = 0, j = s.length() - 1;

    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

bool isMatching(string x, string y)
{
    int i = 0;
    int j = y.length() - 1;

    if (x[i] != y[j])
        return false;

    while (i < j)
    {
        if (x[i] == y[j])
        {
            i++;
            j--;
        }
        else
        {
            break;
        }
    }

    string s1 = x.substr(0, i);
    string s2 = y.substr(i);

    string ans2 = "-1";

    if (i < j)
    {
        string s3 = x.substr(0, x.length() - i);
        string s4 = y.substr(y.length() - i);
        ans2 = s3 + s4;
    }

    string ans1 = s1 + s2;

    if (isPalindrome(ans1) || isPalindrome(ans2))
        return true;

    return false;
}

bool checkPalindromeFormation(string a, string b)
{
    if (a.length() == 1 || b.length() == 1 || isPalindrome(a) || isPalindrome(b))
        return true;

    if (isMatching(a, b) || isMatching(b, a))
        return true;

    return false;
}

int main(){

return 0;
}