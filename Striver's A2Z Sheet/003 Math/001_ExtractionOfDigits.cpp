#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    while(n>0){
        int ld = n%10;
        v.push_back(ld);
        n /= 10;
    }

    for(auto i: v){
        cout << i << " ";
    }
}

// Time Complexity: log10 n

// Note: 
// When the number of iterations depend on repeated division, the time complexity is typically logarithmic. 
// The number of times n can be divided by x until it reaches 1 is logx (n), where x is the divisor.
