#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int>& v, int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && v[j-1]>v[j]){
            swap(v[j],v[j-1]);
            j--;
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

    insertion_sort(v,n);

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }

    return 0;
}