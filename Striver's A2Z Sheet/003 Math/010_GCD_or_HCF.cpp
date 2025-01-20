// GCD or HCF

#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int a, b, mn, hcf;
//     cin >> a >> b;

//     mn = min(a, b);

//     for(int i=1; i<=mn; i++){
//         if(a % i == 0 && b % i == 0){
//             hcf = i;
//         }
//     }

//     cout << hcf << "\n";

//     return 0;
// }

int main(){
    int a, b, mn;
    cin >> a >> b;

    mn = min(a, b);

    for(int i=mn; i>=1; i--){
        if(a % i == 0 && b % i == 0){
            cout << i;
            return 0;
        }
    }

    cout << 1 << "\n";
    return 0;
}