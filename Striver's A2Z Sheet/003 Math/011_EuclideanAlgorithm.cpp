// Euclidean algorithm to find the GCD
// gcd(a, b) -> gcd(a-b, b) where a > b
// repeat the process - when one of 'em becomes zero, the other one is the hcf/gcd

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(a > 0 && b > 0)
    {
        if(a > b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }
    if(a){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    cout << gcd(12,20);
}
