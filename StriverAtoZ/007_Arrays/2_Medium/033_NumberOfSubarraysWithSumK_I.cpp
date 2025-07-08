// brute force

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<=n; j++){
            int sum = 0;
            for(int k=i; k<j; k++){
                sum += v[k];
            }
            if(sum == target){
                count++;
            }
        }
    }

    cout << count;

    return 0;
}

// TC: n³
// Space: 1
// Problem: number of subarrays with sum k