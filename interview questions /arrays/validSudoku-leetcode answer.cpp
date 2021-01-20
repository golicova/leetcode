#include <iostream> 
#include <vector> 
#include <unordered_map> 

using namespace std; 

bool isValidSudoku(vector<vector<char>>& a) {
    int n = 9;
    for (int i = 0; i < n; i++) {
        bool b[9] = {}, c[9] = {}, d[9] = {};
        for (int j = 0; j < n; j++) {
            char x = a[i][j];
            if (x == '.') continue;
            if (b[x - '1'] == 0)
                b[x - '1'] = 1;
            else
                return 0;
        }
        for (int j = 0; j < n; j++) {
            char x = a[j][i];
            if (x == '.') continue;
            if (c[x - '1'] == 0)
                c[x - '1'] = 1;
            else 
                return 0;
        }
        for (int j = 0; j < n; j++) {
            char x = a[3 * (i / 3) + j / 3][3 * (i % 3) + j % 3];
            if (x == '.') continue;
            if (d[x - '1'] == 0)
                d[x - '1'] = 1;
            else 
                return 0;
        }
    }
    return 1;
}

int main() {
    vector<vector<char>> board;
    isValidSudoku(board);
    return 0; 
}