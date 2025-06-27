// optimal - Dutch National Flag Algorithm

#include <bits/stdc++.h>
using namespace std;

void fn(vector<int>& v, int n){
    int low = 0, mid = 0, high = n-1;
    while(mid<=high){
        if(v[mid]==0){
            swap(v[low],v[mid]);
            low++;
            mid++;
        }
        else if(v[mid]==1){
            mid++;
        }
        else{
            swap(v[mid],v[high]);
            high--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    fn(v, n);

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }

    return 0;
}

// TC: n
// Space: 1
// Problem: sort an array of 0s, 1s and 2s