// better

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int count = 0;

    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += v[j];
            if(k == sum){
            count++;
            }
        } 
    }

    cout << count;

    return 0;
}

// TC: n²
// Space: 1
// Problem: number of subarrays with sum k