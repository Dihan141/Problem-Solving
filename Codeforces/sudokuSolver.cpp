#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isOK(int row, int col, char val, vector<vector<char>>& board){
        for(int i=0; i<9; i++){
            if(board[row][i] == val){
                return false;
            }
            if(board[i][col] == val){
                return false;
            }
            if(board[3*(row/3)+i/3][3*(col/3)+i%3] == val){
                return false;
            }
        }
        return true;
    }
    bool Solve(vector<vector<char>>& ans){
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(ans[i][j] == '.'){
                    for(char k='1'; k<='9'; k++){
                        if(isOK(i, j, k, ans)){
                            ans[i][j] = k;
                            if(Solve(ans)){
                                return true;
                            }
                            else{
                                ans[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        bool ans = Solve(board);
        return;
    }
};