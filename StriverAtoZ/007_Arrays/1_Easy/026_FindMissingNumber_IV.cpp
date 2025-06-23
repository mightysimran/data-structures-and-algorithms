// optimal (XOR)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n-1);  
    for(int i=0; i<n-1; i++){
        cin >> v[i];
    }

    int xor1 = 0, xor2 = 0;
    for(int i=0l; i<n-1; i++){
        xor2 ^= v[i]; 
        xor1 ^= (i+1); 
    }

    xor1 ^= n; // include the last number n in xor1

    cout << (xor1 ^ xor2);

    return 0;
}

// TC: n
// slightly better
// Problem: find missing number in the array