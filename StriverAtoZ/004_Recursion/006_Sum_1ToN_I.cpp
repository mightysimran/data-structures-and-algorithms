// parameterized recursion

#include <bits/stdc++.h>
using namespace std;

// void fn(int i, int n, int sum){
//     if(i>n){
//         cout << sum;
//         return;
//     }
//     fn(i+1, n, sum);
// }

void fn(int n, int sum){
    if(n<1){
        cout << sum;
        return;
    }
    fn(n-1,sum+n);
}

int main()
{
    int n;
    cin >> n;

    // fn(1,n,0)
    fn(n,0);

    return 0;
}