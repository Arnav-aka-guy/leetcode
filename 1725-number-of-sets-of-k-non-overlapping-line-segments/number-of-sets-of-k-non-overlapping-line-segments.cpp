class Solution {
public:
    static const int MOD = 1e9 + 7;

    int numberOfSets(int n, int k) {

        int maxN = n + k - 1;

        vector<vector<long long>> dp(maxN + 1,
                                     vector<long long>(2 * k + 1, 0));

        for (int i = 0; i <= maxN; i++) {
            dp[i][0] = 1;
        }

        for (int i = 1; i <= maxN; i++) {
            for (int j = 1; j <= min(i, 2 * k); j++) {

                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % MOD;
            }
        }

        return dp[maxN][2 * k];
    }
};