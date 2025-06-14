#include <bits/stdc++.h>
using namespace std;

void fn(int i, int n){
    if(i>n){
        return;
    }
    fn(i+1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cin >> n;
    fn(1,n);

    return 0;
}