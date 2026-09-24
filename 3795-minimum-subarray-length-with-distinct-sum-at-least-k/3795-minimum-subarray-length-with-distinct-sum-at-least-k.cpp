class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int left = 0;
        int distinctSum = 0;
        int ans = INT_MAX;

        unordered_map<int, int> freq;

        for(int right = 0;right < nums.size();right++){
            freq[nums[right]]++;

            if(freq[nums[right]] == 1){
                distinctSum += nums[right];
            }
            while(distinctSum >= k){
                ans = min(ans, right-left+1);

                freq[nums[left]]--;

                if(freq[nums[left]] == 0){
                    distinctSum -= nums[left];
                }
                left++;
            }
        }
        if(ans == INT_MAX)
        return -1;
        return ans;
    }
};