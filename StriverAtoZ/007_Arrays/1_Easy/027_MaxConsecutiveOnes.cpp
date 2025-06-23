// optimal

#include <bits/stdc++.h>
using namespace std;

int maxConsecOnes(vector<int>& v, int n){
    int mx, c;
    c = 0;
    mx = 0;

    for(int i=0; i<n; i++){
        if(v[i]==1){
            c++;
            mx = max(mx,c);
        }
        else{
            c=0;
        }
    }

    return mx;
}

int main()
{   
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    cout << maxConsecOnes(v,n);
    return 0;
}

// TC: n
// Problem: maximum number of consecutive 1s