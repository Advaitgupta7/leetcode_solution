class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        int maxi = 0;

        for(int i = 1; i <= m; i++) {

            for(int j = 1; j <= n; j++) {

                if(matrix[i - 1][j - 1] == '1') {

                    dp[i][j] = 1 + min({
                        dp[i - 1][j],      // top
                        dp[i][j - 1],      // left
                        dp[i - 1][j - 1]   // diagonal
                    });

                    maxi = max(maxi, dp[i][j]);
                }
            }
        }

        return maxi * maxi;
    }
};