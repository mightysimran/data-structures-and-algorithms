// brute force

#include <bits/stdc++.h>
using namespace std;

bool ls(vector<int> v, int num){
    for(int i=0; i<v.size(); i++){
        if(v[i]==num){
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int longest = 1;
    for(int i=0; i<n; i++){
        int x=v[i];
        int count=1;
        while(ls(v, x+1)){
            x++;
            count++;
        }
        longest=max(longest,count);
    }
      
    cout << longest;
    return 0;
}

// TC: n²
// Space: 1
// Problem: longest consecutive sequence 
