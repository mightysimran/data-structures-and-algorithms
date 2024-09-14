#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << "  ";
        }
        char ch = 'A';
        int x = (2*i+1) / 2;
        for(int j=1;j<=2*i+1;j++){
            cout << ch << " ";
            if(j<=x){
                ch++;
            }
            else{
                ch--;
            }
        }
        cout << "\n";
    }
    return 0;
}

//         A 
//       A B A 
//     A B C B A 
//   A B C D C B A 
// A B C D E D C B A 
// n=5