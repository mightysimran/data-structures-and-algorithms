// character hashing - lowercase letters

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // precalc
    vector<int> hash(26,0);
    for(int i=0; i<s.length(); i++){
        hash[s[i]-'a']++;
    }

    int t;
    cin >> t;
    while(t--){
        char c;
        cin >> c;
        // fetch
        cout << hash[c-'a'] << "\n";
    }

    return 0;
}