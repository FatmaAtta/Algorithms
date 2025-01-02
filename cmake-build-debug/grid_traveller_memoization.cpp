#include <bits/stdc++.h>
#include <chrono>
using namespace std;

int n_unique_paths(int m, int n){
    vector<vector<int>> grid(m,vector<int>(n));
    for(int i =0; i<m; ++i){
        for(int j = 0; j<n; ++j){
            if(i==0){
                grid[i][j] = 1;
            }
            if(j==0){
                grid[i][j] = 1;
            }
            if(i>0 && j>0){
                grid[i][j] = grid[i-1][j] + grid[i][j-1];
            }
        }
    }
    return grid[m-1][n-1];
}

int main(){
    cout<<n_unique_paths(5,5);
    return 0;
}
