class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        bool jewel[128] = {};
        for (char c : jewels)
            jewel[c] = true;
        int count = 0;
        for (char c : stones) {
            if (jewel[c])
                count++;
        }
        return count;
    }
};