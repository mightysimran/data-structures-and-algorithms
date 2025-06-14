#include <bits/stdc++.h>
using namespace std;

void fn(int n, int i){
    if(n<i){
        return;
    }
    fn(n-1,i);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    fn(n, 1);

    return 0;
}