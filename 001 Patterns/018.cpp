// Pattern - 18
#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout << ch << " ";
        }
        cout << "\n";
    }
    return 0;
}

// E 
// D E 
// C D E 
// B C D E 
// A B C D E 
// n=5