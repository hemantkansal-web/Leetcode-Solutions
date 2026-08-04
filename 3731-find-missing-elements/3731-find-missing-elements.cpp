class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        // Sort the array so consecutive elements can be compared
        sort(nums.begin(), nums.end());

        vector<int> ans;

        // Compare every adjacent pair
        for (int i = 0; i < nums.size() - 1; i++) {

            // Add all numbers between nums[i] and nums[i+1]
            for (int j = nums[i] + 1; j < nums[i + 1]; j++) {
                ans.push_back(j);
            }
        }

        return ans;
    }
};