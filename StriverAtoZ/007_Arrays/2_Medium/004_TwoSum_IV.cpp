// slightly better (Two Pointer)

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

    int left=0;
    int right=n-1;

    sort(v.begin(), v.end());

    while(left<right){
        int sum=v[left]+v[right];
        if(sum==target){
            cout << "YES\n";
            return 0;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    cout << "NO\n";
    return 0;
}

// TC: n + nlogn (for sorting)
// Space: 1