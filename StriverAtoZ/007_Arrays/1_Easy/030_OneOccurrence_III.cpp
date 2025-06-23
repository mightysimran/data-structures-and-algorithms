// optimal (XOR)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,1,2,2,5,4,4};

    int xorr = 0;
    for(int i=0; i<v.size(); i++){
        xorr ^= v[i];
    }

    cout << xorr;

    return 0;
}

// TC: n
// Space: 1
// Problem: find the number that occurs once, while others occur twice.