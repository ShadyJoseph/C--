#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix) {
    vector<int> result;
    if (matrix.empty()) return result;

    int rowsCount = matrix.size();
    int colsCount = matrix[0].size();
    int top = 0, bottom = rowsCount - 1, left = 0, right = colsCount - 1;

    while (top <= bottom && left <= right) {
        // Move right along the top row
        for (int j = left; j <= right; j++) {
            result.push_back(matrix[top][j]);
        }
        top++;  // Move the top boundary down

        // Move down along the rightmost column
        for (int i = top; i <= bottom; i++) {
            result.push_back(matrix[i][right]);
        }
        right--;  // Move the right boundary left

        // Move left along the bottom row (if still valid)
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                result.push_back(matrix[bottom][j]);
            }
            bottom--;  // Move the bottom boundary up
        }

        // Move up along the leftmost column (if still valid)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                result.push_back(matrix[i][left]);
            }
            left++;  // Move the left boundary right
        }
    }

    return result;
}
