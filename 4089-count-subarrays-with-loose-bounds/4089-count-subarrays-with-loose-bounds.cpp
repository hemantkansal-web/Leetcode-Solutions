class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;
        long long cnt = 0;

        for(int x: nums){
            if(x >= minK && x <= maxK){
                cnt++;
            } else {
                cnt = 0;
            }
            ans += cnt;
        }
        return ans;
    }
};