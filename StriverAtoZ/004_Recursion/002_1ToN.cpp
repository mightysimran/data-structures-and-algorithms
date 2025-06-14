#include <bits/stdc++.h>
using namespace std;

// int x=1;

// void fn(){
//     if(x>5){
//         return;
//     }
//     cout << x << " ";
//     x++;
//     fn();
// }

void fn(int i, int n){
    if(i>n){
        return;
    }
    cout << i << " ";
    fn(i+1,n);
}

int main()
{
    // fn();

    int n;
    cin >> n;
    fn(1,n);

    return 0;
}