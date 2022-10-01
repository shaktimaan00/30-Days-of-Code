#include <bits/stdc++.h>
using namespace std;

bool matches(char a, char b)
{
    return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}

bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<char> arr;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            arr.push(s[i]);
        }
        else
        {
            if (arr.empty())
                return false;
            else if (matches(arr.top(), s[i]) == false)
                return false;
            else
                arr.pop();
        }
    }
    return arr.empty();
}

int main(){

    string s;
    cin >> s;

    cout << isValidParenthesis(s) << endl;   



    return 0;
}