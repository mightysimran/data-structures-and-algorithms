// brute force

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end()); // TC: O(nlogn)

    int max = v[n-1];

    for(int i=n-2; i>=0; i--){
        if(v[i] != max){
            cout << v[i];
            break;
        }
    } 

    return 0;
}

// Total TC: nlogn + n
// Problem: second largest element in an array