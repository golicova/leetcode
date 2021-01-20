#include <iostream> 
#include <vector> 
#include <unordered_map> 

using namespace std; 

bool isValidSudoku(vector<vector<char>>& board){

    unordered_map<char, int> rows;
    unordered_map<char, int> cols; 

    // Validate Rows
    for(int i = 0; i < 9; i++){
        // clear previous row
        rows.clear();
        for(int j = 0; j < 9; j++){
            // skip if spot is empty
            if(board[i][j] == '.')
                continue;
            if(rows.count(board[i][j]) > 0){
                return false;
            }
            rows.emplace(board[i][j], 0);
        }
    }

    // validate columns
    for(int j = 0; j < 9; j++){
        // clear previous column
        cols.clear();
        for(int i = 0; i < 9; i++){
            if(board[i][j] == '.')
                continue;
            if(cols.count(board[i][j]) > 0){
                return false;
            }
            cols.emplace(board[i][j], 0);
        }
    }

    unordered_map<char, int> box; 

    for(int row = 0; row < 9; row += 3){
        box.clear();
        for(int col = 0; col < 9; col += 3){
            box.clear();
            for(int rowIdx = row; rowIdx < row + 3; rowIdx++){
                for(int colIdx = col; colIdx < col + 3; colIdx++){
                    if(board[rowIdx][colIdx] == '.'){
                        continue;
                    }
                    if(box.count(board[rowIdx][colIdx]) > 0){
                        return false;
                    }
                    box.emplace(board[rowIdx][colIdx], 0);
                }
            }
        }
    }

    return true;
}