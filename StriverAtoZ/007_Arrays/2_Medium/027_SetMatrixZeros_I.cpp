// brute force

#include <bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>>& matrix, int i, int n, int m){
    for(int j=0; j<m; j++){
        if(matrix[i][j] != 0){
            matrix[i][j] = -1;
        }
    }
}

void markColumn(vector<vector<int>>& matrix, int j, int n, int m){
    for(int i=0; i<n; i++){
        if(matrix[i][j] != 0){
            matrix[i][j] = -1;
        }
    }
}

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

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == 0){
                markRow(matrix, i, n, m);
                markColumn(matrix, j, n, m);
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == -1){
                matrix[i][j] = 0;
            }
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

// TC: n × m × (n + m) in the worst case
// Space: 1 
// Problem: set matrix zeros
