#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c;
    cin >> n;

    if(n==1){
        cout << "neither prime nor composite";
        return 0;
    }

    c = 0;
    for(int i=1; i*i<=n; i++){
        if(n%i == 0){
            c++;
            if((n/i) != i){
                c++;
            }
        }
    }

    if(c==2){
        cout << "prime";
    }
    else{
        cout << "composite";
    }
}