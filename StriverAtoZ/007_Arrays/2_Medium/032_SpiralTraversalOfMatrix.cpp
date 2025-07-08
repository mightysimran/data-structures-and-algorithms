// optimal

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // intuition: 
    // right -> bottom -> left -> top

    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }

    int left=0, right=m-1;
    int top=0, bottom=n-1;
    vector<int> res;

    while(top<=bottom && left<=right){
        // right
        for(int i=left; i<=right; i++){
            res.push_back(mat[top][i]);
        }
        top++;

        // bottom
        for(int i=top; i<=bottom; i++){
            res.push_back(mat[i][right]);
        }
        right--;
        
        if(top<=bottom){
            // left
            for(int i=right; i>=left; i--){
                res.push_back(mat[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            // top
            for(int i=bottom; i>=top; i--){
                res.push_back(mat[i][left]);
            }
            left++;
        }
    }

    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }

    return 0;
}

// TC: n × m
// Space: n × m 
// Problem: spiral traversal of matrix 

