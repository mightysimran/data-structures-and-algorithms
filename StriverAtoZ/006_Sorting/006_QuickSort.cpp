#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& v, int low, int high){
    int p=v[low];
    int i=low;
    int j=high;

    while(i<j){
        while(v[i]<=p && i<=high-1){
            i++;
        }
        while(v[j]>p && j>=low+1){
            j--;
        }
        if(i<j){
            swap(v[i],v[j]);
        }
    }
    swap(v[low],v[j]);
    return j;
}

void qs(vector<int>& v, int low, int high){
    if(low<high){
        int partitionIndex = partition(v,low,high);
        qs(v,low,partitionIndex-1);
        qs(v,partitionIndex+1,high);
    }
}

void quick_sort(vector<int>& v, int n){
    qs(v,0,n-1);
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    quick_sort(v,n);

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }

    return 0;
}