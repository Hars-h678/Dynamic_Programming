#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector< vector< int > >uniquePath(m,vector<int>(n,0));
        for(int i=0;i<n;i++) uniquePath[0][i] = 1;
        for(int i=0 ;i<m;i++) uniquePath[i][0] = 1;
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                uniquePath[i][j] = uniquePath[i-1][j] +uniquePaths[i][j-1];
            }
        }
        return uniquePath[m-1][n-1];
    }
};