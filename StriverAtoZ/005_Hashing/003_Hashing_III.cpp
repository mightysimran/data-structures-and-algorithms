// character hashing - All ASCII Characters

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // precalc
    vector<int> hash(256,0);
    for(int i=0; i<s.length(); i++){
        hash[s[i]]++;
    }

    int t;
    cin >> t;
    while(t--){
        char c;
        cin >> c;
        // fetch
        cout << hash[c] << "\n";
    }

    return 0;
}