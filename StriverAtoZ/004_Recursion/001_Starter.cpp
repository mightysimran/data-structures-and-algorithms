#include <bits/stdc++.h>
using namespace std;

// int x=1;

// void fn(){
//     if(x>5){
//         return;
//     }
//     cout << "recursion\n";
//     x++;
//     fn();
// }

void fn(int i, int n){
    if(i>n){
        return;
    }
    cout << "recursion\n";
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

// Time Complexity: O(n)
// Space Complexity: O(n)

// note: for space complexity the stack space is considered