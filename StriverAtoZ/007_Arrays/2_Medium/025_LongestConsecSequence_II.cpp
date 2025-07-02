// better

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

    sort(v.begin(), v.end());
    int longest = 1;
    int count = 0;
    int lastSmaller = INT_MIN;

    for(int i=0; i<n; i++){
        if(v[i]-1 == lastSmaller){
            count++;
            lastSmaller=v[i];
        }
        else if(v[i] != lastSmaller){
            count=1;
            lastSmaller=v[i];
        }
        longest = max(longest, count);
    }

    cout << longest;

    return 0;
}

// TC: nlogn + n
// Space: 1
// Problem: longest consecutive sequence 