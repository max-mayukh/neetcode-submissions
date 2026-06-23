class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        // tracking arrays initialized to false
        // rows[r][val], cols[c][val], boxes[b][val]
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool boxes[9][9] = {false};
        
        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                if (board[r][c] == '.') {
                    continue;
                }
                
                // Convert char '1'-'9' to a 0-indexed integer 0-8
                int val = board[r][c] - '1'; 
                
                // Formula to find the 3x3 box index (0 to 8)
                int box_idx = (r / 3) * 3 + (c / 3);
                
                // If the number was already seen in this row, col, or box, it's invalid
                if (rows[r][val] || cols[c][val] || boxes[box_idx][val]) {
                    return false;
                }
                
                // Mark this number as seen
                rows[r][val] = true;
                cols[c][val] = true;
                boxes[box_idx][val] = true;
            }
        }
        
        return true;
    }
};