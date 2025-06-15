// functional recursion

#include <bits/stdc++.h>
using namespace std;

int fn(int n){
    if(!n){
        return 0;
    }
    return n + fn(n-1);
}

int main()
{
    int n;
    cin >> n;

    cout << fn(n);

    return 0;
}