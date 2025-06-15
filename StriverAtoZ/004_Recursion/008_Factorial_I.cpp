// parameterized recursion

#include <bits/stdc++.h>
using namespace std;

// void fn(int i, int n, int factorial){
//     if(i>n){
//         cout << factorial;
//         return;
//     }
//     fn(i+1, n, factorial*i);
// }

void fn(int n, int factorial){
    if(n<1){
        cout << factorial;
        return;
    }
    fn(n-1, factorial*n);
}

int main()
{
    int n;
    cin >> n;
    
    // fn(1,n,1);
    fn(n,1);

    return 0;
}