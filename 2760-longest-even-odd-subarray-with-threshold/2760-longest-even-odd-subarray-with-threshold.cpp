class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {

        int n = nums.size();
        int len = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {

            // Condition 1: Element must not exceed threshold
            if (nums[i] > threshold) {
                len = 0;
            }

            // Start a new subarray
            else if (len == 0) {
                if (nums[i] % 2 == 0) {
                    len = 1;
                }
            }

            // Condition 2: Alternating parity
            else if (nums[i] % 2 != nums[i - 1] % 2) {
                len++;
            }

            // Same parity
            else {
                if (nums[i] % 2 == 0) {
                    len = 1;
                }
                else {
                    len = 0;
                }
            }

            ans = max(ans, len);
        }

        return ans;
    }
};