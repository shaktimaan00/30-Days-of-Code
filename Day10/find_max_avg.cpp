#include<bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int> &arr, int k)
{
    double maxavg = INT_MIN;
    double avg = 0;

    for (int i = 0; i < k; i++)
    {
        avg += arr[i];
    }

    maxavg = max(maxavg, avg);

    for (int i = k; i < arr.size(); i++)
    {
        avg += arr[i];
        avg -= arr[i - k];
        maxavg = max(maxavg, avg);
    }

    return maxavg / k;
}

int main(){

    int n, k;
    cin >> n >> k;

    vector<int> arr;
    
    for(int i=0; i<n; i++){
        int x; cin >> x;
        arr.push_back(x);
    }

    double x = findMaxAverage(arr, k);

    cout << x << endl;
    
    return 0;
}