#include<bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int> &arr, int k)
{
    double maxavg = INT_MIN;
    double avg = 0;
    int i = 0, j = -1;

    while (k--)
    {
        j++;
        avg += arr[j]/k;
    }

    // maxavg = max(maxavg, avg);

    // while(j < arr.size()){

    // }



    cout << j << endl;

    return avg;
}

int main(){

    vector<int> arr = {1, 12, -5, -6, 50, 3};

    cout << findMaxAverage(arr, 4);

    return 0;
}