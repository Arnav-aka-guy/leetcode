class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        for (int pivot = 0; pivot < n; pivot++) {
            int leftSum = accumulate(nums.begin(),nums.begin() + pivot, 0);
            int rightSum = accumulate(nums.begin() + pivot + 1,nums.end(),0);
            if (leftSum == rightSum) {
                return pivot;
            }
        }
        return -1;
    }
};