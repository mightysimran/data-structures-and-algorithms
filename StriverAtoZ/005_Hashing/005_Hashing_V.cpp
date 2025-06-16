// character hashing - map

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // precalc
    map<char,int> mpp;
    // unordered_map<char,int> mpp;

    for(int i=0; i<s.length(); i++){
        mpp[s[i]]++;
    }
    for(auto i:mpp){
        cout << i.first << " -> " << i.second << "\n";
    }

    int t;
    cin >> t;
    while(t--){
        char c;
        cin >> c;
        // fetch
        cout << mpp[c] << endl;
    }

    return 0;
}