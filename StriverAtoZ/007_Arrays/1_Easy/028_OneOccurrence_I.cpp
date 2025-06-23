// brute force

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,1,2,2,5,4,4};
    
    for(int i=0; i<v.size(); i++){
        int value = v[i];
        int count = false;
        
        for(int x=0; x<v.size(); x++){
            if(v[x] == value){
                count++;
            }
        }
        if(count==1){
            cout << value;
            break;
        }
    }

    return 0;
}

// TC: n²
// Space: 1
// Problem: find the number that occurs once, while others occur twice.