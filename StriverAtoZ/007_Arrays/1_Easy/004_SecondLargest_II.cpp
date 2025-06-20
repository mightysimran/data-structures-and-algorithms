// better

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

    int largest = v[0];
    for(int i=1; i<n; i++){
        if(v[i]>largest){
            largest=v[i];
        }
    }

    int secondLargest = INT_MIN;
    for(int i=0; i<n; i++){
        if(v[i]>secondLargest && v[i]!=largest){
            secondLargest = v[i];
        }
    }

    cout << secondLargest;

    return 0;
}

// Total TC: 2n
// Problem: second largest element in an array