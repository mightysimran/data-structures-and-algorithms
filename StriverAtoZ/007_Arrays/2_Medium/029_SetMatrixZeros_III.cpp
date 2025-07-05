// optimal

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> matrix[i][j];
        }
    }

    // int row[n] = {0}; -> matrix[0][..]
    // int column[m] = {0}; -> matrix[..][0]

    int col0 = 1;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0; // mark the i-th row
                if(j != 0){
                    matrix[0][j] = 0; // mark the j-th column
                }
                else{
                    col0 = 0; // special handling for the first column 
                }
            }
        }
    }

    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            if(matrix[i][j] != 0){
                // check for row and column
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }

    // handle the first row
    if(matrix[0][0] == 0){
        for(int j=0; j<m; j++){
            matrix[0][j] = 0;
        }
    }
    // handle the first column
    if(col0 == 0){
        for(int i=0; i<n; i++){
            matrix[i][0] = 0;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

// TC: n × m
// Space: 1
// Problem: set matrix zeros