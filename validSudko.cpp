#include <vector>
#include <unordered_set>
using namespace std;

bool isValidSudoku(vector<vector<char>> &board) {
    unordered_set<char> row[9], col[9], boxes[9];

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            char num = board[i][j];

            if (num == '.') continue; // Ignore empty cells

            int boxIndex = (i / 3) * 3 + (j / 3); // Compute 3x3 box index

            // Check if the number is already in the row, column, or box
            if (row[i].count(num) || col[j].count(num) || boxes[boxIndex].count(num))
                return false;

            // Insert the number into the respective sets
            row[i].insert(num);
            col[j].insert(num);
            boxes[boxIndex].insert(num);
        }
    }
    return true; // No conflicts found
}
