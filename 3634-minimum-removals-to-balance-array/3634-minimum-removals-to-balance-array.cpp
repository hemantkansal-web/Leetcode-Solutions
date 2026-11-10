class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end()); //array sort kar diya
        int n = nums.size();
        int i = 0;
        int maxLen = 0;

        for(int j = 0;j < n;j++){
            while((long long)nums[j] > (long long)nums[i]*k ){
                i++;
            }
            maxLen = max(maxLen, j-i+1);
        }
        return n - maxLen;
    }
};