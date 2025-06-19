// optimal

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

    int max = v[0];
    for(int i=1; i<n; i++){
        if(v[i]>max){
            max=v[i];
        }
    }

    cout << max;

    return 0;
}

// TC: n
// Problem: largest element in an array