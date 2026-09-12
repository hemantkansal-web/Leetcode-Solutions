class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        double sum = 0;
        double ans = -1e9;

        for(int right = 0;right < nums.size();right++){
            sum += nums[right];

            if(right - left + 1 == k) {
                ans = max(ans, sum/k);

                sum -= nums[left];
                left++;
            }
        }
        return ans;
    }
};