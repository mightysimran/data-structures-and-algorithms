// brute force

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v = {1,1,1,2,2,3};

    set<int> s;
    for(int i=0; i<n; i++){
        s.insert(v[i]);
    } 

    int index=0;
    for(auto value: s){
        v[index]=value;
        index++;
    }

    cout << index;

    return 0;
}

// TC: nlogn + n
// SC: n
// Problem: remove repetitions in-place from sorted array