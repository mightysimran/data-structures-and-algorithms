// better

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

    // int row[n] = {0};
    // int column[m] = {0};

    vector<int> row(n, 0);
    vector<int> column(m, 0);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == 0){
                row[i]=1;
                column[j]=1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(row[i] || column[j]){
                matrix[i][j]=0;
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

// TC: n × m
// Space: n + m
// Problem: set matrix zeros
