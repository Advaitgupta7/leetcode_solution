class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;

        int rows = matrix.size();
        int cols = matrix[0].size();

        int startRow = 0;
        int endRow = rows - 1;
        int startCol = 0;
        int endCol = cols - 1;

        int count = 0;
        int total = rows * cols;

        while(count < total)
        {
            // Top Row
            for(int i = startCol; i <= endCol && count < total; i++)
            {
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;

            // Right Column
            for(int i = startRow; i <= endRow && count < total; i++)
            {
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;

            // Bottom Row
            for(int i = endCol; i >= startCol && count < total; i--)
            {
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;

            // Left Column
            for(int i = endRow; i >= startRow && count < total; i--)
            {
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }

        return ans;
    }
};