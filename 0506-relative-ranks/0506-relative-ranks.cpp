
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<int> sortedScore = score;
        sort(sortedScore.begin(), sortedScore.end(), greater<int>());
        unordered_map<int, int> rank;
        for (int i = 0; i < n; i++) {
            rank[sortedScore[i]] = i + 1;
        }
        vector<string> ans(n);
        for (int i = 0; i < n; i++) {
            int r = rank[score[i]];
            if (r == 1)
                ans[i] = "Gold Medal";
            else if (r == 2)
                ans[i] = "Silver Medal";
            else if (r == 3)
                ans[i] = "Bronze Medal";
            else
                ans[i] = to_string(r);
        }
        return ans;
    }
};
