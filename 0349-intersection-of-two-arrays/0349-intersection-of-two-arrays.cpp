class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        set<int> unique1(nums1.begin(), nums1.end());
        set<int> unique2(nums2.begin(), nums2.end());

        vector<int> nums3;

        for (int x : unique1) 
        {
            if (unique2.find(x) != unique2.end()) 
            {
                nums3.push_back(x);
            }
        }

        return nums3;
    }
};