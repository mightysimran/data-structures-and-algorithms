#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int j=1;j<=i+1;j++){
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 