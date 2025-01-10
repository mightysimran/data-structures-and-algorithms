#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, reverse = 0;
    cin >> n;
    
    int x = n;

    while(n>0){
        int ld = n%10;
        n /= 10;
        reverse = (reverse*10) + ld;
    }

    (x == reverse) ? cout << "palindrome" : cout << "not palindrome";
}