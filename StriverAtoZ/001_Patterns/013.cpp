// Pattern - 13
#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int x = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << x << " ";
            x++;
        }
        cout << "\n";
    }
    return 0;
}

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// n=4