#include <bits/stdc++.h>
using namespace std;

// void fn(int a[], int l, int r){
//     if(l>=r){
//         return;
//     }
//     swap(a[l], a[r]);
//     fn(a, l+1, r-1);
// }

void fn(vector<int>& v, int l, int r){
    if(l>=r){
        return;
    }
    swap(v[l], v[r]);
    fn(v, l+1, r-1);
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    fn(v, 0, n-1);

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }

    return 0;
}