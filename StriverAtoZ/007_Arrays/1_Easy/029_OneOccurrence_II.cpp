// better (Hashing)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,1,2,2,5,4,4};
    map<int, int> mpp;

    for(int i=0; i<v.size(); i++){
        mpp[v[i]]++;
    }
    for(auto i: mpp){
        if(i.second==1){
            cout << i.first;
            break;
        }
    }

    return 0;
}

// TC: nlogn
// Space: n
// Problem: find the number that occurs once, while others occur twice.