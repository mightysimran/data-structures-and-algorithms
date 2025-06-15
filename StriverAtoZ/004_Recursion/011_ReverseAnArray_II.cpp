#include <bits/stdc++.h>
using namespace std;

void fn(vector<int>& v, int i){
    int n = v.size();
    if(i>=n/2){
        return;
    }
    swap(v[i], v[n-1-i]);
    fn(v, i+1);
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    fn(v, 0);

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }

    return 0;
}

