// optimal

#include <bits/stdc++.h>
using namespace std;


int secondLargest(vector<int>& v, int n){
    int largest=v[0];
    int secondLargest=INT_MIN;
    for(int i=1; i<n; i++){
        if(v[i]>largest){
            secondLargest=largest;
            largest=v[i];
        }
        else if(v[i]<largest && v[i]>secondLargest){
            secondLargest=v[i];
        }
    }
    return secondLargest;
}

int secondSmallest(vector<int>& v, int n){
    int smallest=v[0];
    int secondSmallest=INT_MAX;
    for(int i=1; i<n; i++){
        if(v[i]<smallest){
            secondSmallest=smallest;
            smallest=v[i];
        }
        else if(v[i]!=smallest && v[i]<secondSmallest){
            secondSmallest=v[i];
        }
    }
    return secondSmallest;
}


int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int x = secondLargest(v,n);
    int y = secondSmallest(v,n);

    cout << x << " " << y;
    
    return 0;
}

// TC: n
// Problem: second largest and second smallest element in an array