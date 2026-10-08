class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans = 0;

        for(int left = 0;left < nums.size();left++){
            int mx = nums[left];
            int mn = nums[left];

            for(int right = left;right < nums.size();right++){

                mx = max(mx, nums[right]);
                mn = min(mn, nums[right]);

                ans += mx - mn;
            }
        }
        return ans;
    }
};