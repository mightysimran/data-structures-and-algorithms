#include <bits/stdc++.h>
using namespace std;

bool fn(string& s, int i){
    int n = s.length();
    if(i>=n/2){
        return true;
    }
    if(s[i] != s[n-1-i]){
        return false;
    }
    return fn(s, i+1);
}

int main()
{
    string s;
    cin >> s;

    cout << fn(s, 0);

    return 0;
}