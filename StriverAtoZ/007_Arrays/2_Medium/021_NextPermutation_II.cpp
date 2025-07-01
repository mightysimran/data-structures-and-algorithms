// optimal 
// no inbuilt function

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

    int ind = -1;
    for(int i=n-2; i>=0; i--){
        if(v[i]<v[i+1]){
            ind=i;
            break;
        }
    }
    if(ind == -1){
        reverse(v.begin(), v.end());
    }
    else{
        for(int i=n-1; i>ind; i--){
            if(v[i]>v[ind]){
                swap(v[i],v[ind]);
                break;
            }
        }
        reverse(v.begin()+ind+1, v.end());
    }

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }

    return 0;
}

// Problem: next permutation