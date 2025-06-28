// optimal - Boyer-Moore Majority Vote Algorithm

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
    
    int cnt = 0;
    int el;
    for(int i=0; i<n; i++){
        if(cnt==0){
            cnt=1;
            el=v[i];
        }
        else if(v[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int res=0;
    for(int i=0; i<n; i++){
        if(v[i] == el){
            res++;
        }
    }
    if(res>n/2){
        cout << el;
        return 0;
    }

    cout << -1;
    return 0;
}

// TC: n
// Space: 1
// Problem: find majority element (> n/2 times)
