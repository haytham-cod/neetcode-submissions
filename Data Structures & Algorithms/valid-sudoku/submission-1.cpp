class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> columns(9);
        vector<unordered_set<char>> table(9);
        int a = 0;
        for(int i = 0; i < board.size(); i++) {
            unordered_set<char> row;
            if(i == 3 || i == 6)
                a += 3;
            for(int j = 0; j < board[i].size(); j++) {
                if(j == 3 || j == 6)
                    a++;
                if(board[i][j] == '.')
                    continue;
                if(row.find(board[i][j]) != row.end())
                    return false;
                else {
                    row.insert(board[i][j]);
                }
                if(table[a].find(board[i][j]) != table[a].end())
                    return false;
                table[a].insert(board[i][j]);

                if(columns[j].find(board[i][j]) != columns[j].end())
                    return false;
                columns[j].insert(board[i][j]);
            }
            a -= 2;
        }
        return true;
    }
};
