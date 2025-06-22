// optimal (Two Pointer)

#include <bits/stdc++.h>
using namespace std;

void moveZerosToTheEnd(vector<int>& v, int n){
    int j=-1;
    for(int i=0; i<n; i++){
        if(v[i]==0){
            j=i;
            break;
        }
    }

    if(j==-1){
        return;
    }

    for(int i=j+1; i<n; i++){
        if(v[i]!=0){
            swap(v[i],v[j]);
            j++;
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

    moveZerosToTheEnd(v,n);

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }

    return 0;
}

// TC: n
// Space: 1 
// Problem: move zeros to the end