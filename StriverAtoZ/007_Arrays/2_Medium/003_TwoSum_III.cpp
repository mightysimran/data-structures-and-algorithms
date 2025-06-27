// better (Hashing) 
// most optimal when we have to return the indices

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

    map<int,int> mpp;
    for(int i=0; i<n; i++){
        int num=v[i];
        int more=target-num;
        if(mpp.find(more) != mpp.end()){
            // cout << "YES\n";
            cout << mpp[more] << " " << i;
            break;
        }
        mpp[num] = i;
    }
    // cout << "NO\n";
    return 0;
}

// TC: n or nlogn
// Space: n