#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    char ch = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << ch << " ";
            
        }
        ch += 1;
        cout << "\n";
    }
    return 0;
}

// A 
// B B 
// C C C 
// D D D D 
// E E E E E 
// n=5