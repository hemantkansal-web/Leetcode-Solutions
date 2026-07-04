class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = INT_MIN;
        int best = nums[0];
        
        for(int j = k;j < n;j++){
            best = max(best, nums[j-k]);

            ans = max(ans,best + nums[j]);
        }
        return ans;
    }
};