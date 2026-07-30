class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> ans ;
        if(nums.size() == 0) return ans;

        ans.push_back(nums[0]);
        int cnt = 1;
        for(int i = 1;i < nums.size();i++){
            if(nums[i] == nums[i-1]){
                cnt++;
                if(cnt <= k)
                ans.push_back(nums[i]);
            } else {
                cnt = 1;
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};