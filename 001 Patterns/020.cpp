#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int spaces = 2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n){
            stars = 2*n-i;
        }
        for(int j=1;j<=stars;j++){
            cout << "* ";
        }
        for(int j=1;j<=spaces;j++){
            cout << "  ";
        }
        for(int j=1;j<=stars;j++){
            cout << "* ";
        }
        cout << "\n";
        if(i<n){
            spaces-=2;
        }
        else{
            spaces+=2;
        }
    }
    return 0;
}

// *             * 
// * *         * * 
// * * *     * * * 
// * * * * * * * * 
// * * *     * * * 
// * *         * * 
// *             * 
// n=4