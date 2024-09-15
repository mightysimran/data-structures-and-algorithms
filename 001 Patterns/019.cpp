#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int initial=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout << "* ";
        }
        for(int j=0;j<initial;j++){
            cout << "  ";
        }
        for(int j=1;j<=n-i;j++){
            cout << "* ";
        }
        initial+=2;
        cout << "\n";
    }

    initial-=2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        cout << "* ";
        }
        for(int j=0;j<initial;j++){
            cout << "  ";
        }
        for(int j=1;j<=i;j++){
            cout << "* ";
        }
        initial-=2;
        cout << "\n";
    }
    return 0;
}

// * * * * * * * * 
// * * *     * * * 
// * *         * * 
// *             * 
// *             * 
// * *         * * 
// * * *     * * * 
// * * * * * * * * 
// n=4