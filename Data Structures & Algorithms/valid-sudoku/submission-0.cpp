class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<int, vector<int>> row, col;

        // Check rows
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] >= '1' && board[i][j] <= '9') {
                    int num = board[i][j] - '0';

                    if (find(row[i].begin(), row[i].end(), num) == row[i].end())
                        row[i].push_back(num);
                    else
                        return false;
                }
            }
        }

        // Check columns
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[j][i] >= '1' && board[j][i] <= '9') {
                    int num = board[j][i] - '0';

                    if (find(col[i].begin(), col[i].end(), num) == col[i].end())
                        col[i].push_back(num);
                    else
                        return false;
                }
            }
        }

        // Check 3x3 boxes
        for (int rowStart = 0; rowStart < 9; rowStart += 3) {
            for (int colStart = 0; colStart < 9; colStart += 3) {

                vector<int> v;

                for (int i = rowStart; i < rowStart + 3; i++) {
                    for (int j = colStart; j < colStart + 3; j++) {

                        if (board[i][j] >= '1' && board[i][j] <= '9') {
                            int num = board[i][j] - '0';

                            if (find(v.begin(), v.end(), num) == v.end())
                                v.push_back(num);
                            else
                                return false;
                        }
                    }
                }
            }
        }

        return true;
    }
};