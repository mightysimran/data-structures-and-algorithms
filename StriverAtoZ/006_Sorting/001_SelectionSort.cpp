#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>& v, int n){
    for(int i=0; i<=n-2; i++){
        int min=i;
        for(int j=i+1; j<=n-1; j++){
            if(v[j] < v[min]){
                min=j;
            }
        }
        swap(v[i],v[min]);
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

    selection_sort(v,n);

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    
    return 0;
}