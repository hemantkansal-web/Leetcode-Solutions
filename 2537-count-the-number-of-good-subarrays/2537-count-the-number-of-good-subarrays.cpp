class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        long long pairs = 0;
        long long ans = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {

            // Add new pairs
            pairs += freq[nums[right]];
            freq[nums[right]]++;

            // Shrink while window is good
            while (pairs >= k) {
                freq[nums[left]]--;
                pairs -= freq[nums[left]];
                left++;
            }

            // Count good subarrays
            ans += left;
        }

        return ans;
    }
};