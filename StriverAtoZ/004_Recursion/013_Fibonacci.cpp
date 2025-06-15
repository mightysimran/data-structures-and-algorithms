#include <bits/stdc++.h>
using namespace std;

int fn(int n){
    if(n<=1){
        return n;
    }
    return fn(n-1) + fn(n-2);
}

int main()
{
    int n;
    cin >> n;

    cout << fn(n);

    return 0;
}