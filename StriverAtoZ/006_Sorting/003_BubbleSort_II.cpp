#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>& v, int n){
    for(int i=n-1; i>=1; i--){
        bool f=false;
        for(int j=0; j<=i-1; j++){
            if(v[j]>v[j+1]){
                swap(v[j], v[j+1]);
                f=true;
            }
        }
        if(!f){
            break;
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

    bubble_sort(v,n);

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }

    return 0;
}