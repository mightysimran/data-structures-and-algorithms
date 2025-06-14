#include <bits/stdc++.h>
using namespace std;

// int x=5;

// void fn(){
//     if(x<1){
//         return;
//     }
//     cout << x << " ";
//     x--;
//     fn();
// }

void fn(int n, int i){
    if(n<i){
        return;
    }
    cout << n << " ";
    fn(n-1,i);
}

int main()
{
    // fn();

    int n;
    cin >> n;
    fn(n,1);

    return 0;
}