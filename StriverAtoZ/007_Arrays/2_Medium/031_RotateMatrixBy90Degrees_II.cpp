// optimal

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // intuition: first transpose, then reverse the rows 
    
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> mat[i][j];
        }
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
    for(int i=0; i<n; i++){
        // row is mat[i]
        reverse(mat[i].begin(), mat[i].end());
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

// TC: n²
// Space: 1 (in-place)
// Problem: rotate matrix by 90 degrees 


