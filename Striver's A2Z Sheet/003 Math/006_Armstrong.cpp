#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    int x = n;
    int count = (int)log10(n)+1;

    while(n>0){
        sum += pow(n%10, count);
        n /= 10;
    }

    (x == sum) ? cout << "armstrong" : cout << "not armstrong"; 
}