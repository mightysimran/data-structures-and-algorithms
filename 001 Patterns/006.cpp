// Pattern - 6
#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            cout << j+1 << " ";
        }
        cout << "\n";
    }
    return 0;
}

// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
