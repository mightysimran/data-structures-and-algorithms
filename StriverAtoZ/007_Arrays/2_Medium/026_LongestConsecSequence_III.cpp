// optimal 
// constraints

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int longest = 1;
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        s.insert(v[i]);
    }
    
    for(auto elm: s){
        if(s.find(elm-1) == s.end()){
            int count = 1;
            int x = elm;
            while(s.find(x+1) != s.end()){
                x++;
                count++;
            }
            longest = max(longest, count);
        }
    }

    cout << longest;

    return 0;
}

// Problem: longest consecutive sequence 