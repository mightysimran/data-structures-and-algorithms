// Pattern - 15
#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout << ch << " ";
        }
        cout << "\n";
    }
    return 0;
}

// A B C D E 
// A B C D 
// A B C 
// A B 
// A 
// n=5