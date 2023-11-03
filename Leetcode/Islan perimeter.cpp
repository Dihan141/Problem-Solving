#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int rowlength = 0;
    int columnlength = 0;
    bool visited[100][100] = {false};
    int islandPerimeter(vector<vector<int>>& grid) {
        rowlength = grid.size();
        columnlength = grid[0].size();
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j] == 1){
                    return DFS(i, j, grid);
                }
            }
        }

        return 0;
    }

    int DFS(int i, int j, vector<vector<int>>& grid){
        if(i < 0 || i >= rowlength)
            return 1;
        if(j < 0 || j >= columnlength)
            return 1;
        if(grid[i][j] == 0)
            return 1;

        if(!visited[i][j]){
            visited[i][j] = true;
            return DFS(i, j-1, grid) + DFS(i, j+1, grid) + DFS(i+1, j, grid) + DFS(i-1, j, grid);
        }

        return 0;
    }
};