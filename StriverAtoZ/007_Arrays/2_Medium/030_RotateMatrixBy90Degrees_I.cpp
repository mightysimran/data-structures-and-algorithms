// brute force

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> matrix[i][j];
        }
    }

    int res[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            res[j][n-1-i] = matrix[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

// TC: n²
// Space: n²
// Problem: rotate the matrix by 90 degrees