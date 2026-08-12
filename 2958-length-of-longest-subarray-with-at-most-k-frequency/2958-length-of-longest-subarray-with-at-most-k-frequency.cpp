class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < nums.size(); right++) {

            // Add current element
            freq[nums[right]]++;

            // Shrink window if frequency exceeds k
            while (freq[nums[right]] > k) {
                freq[nums[left]]--;
                left++;
            }

            // Current window is valid
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};