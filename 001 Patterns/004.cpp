#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int j=1;j<=i+1;j++){
            cout << i+1 << " ";
        }
        cout << "\n";
    }
    return 0;
}

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 
