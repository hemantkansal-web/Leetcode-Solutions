class Solution {
public:
    int countElements(vector<int>& nums) {
        int max = *max_element(nums.begin(),nums.end());
        int min = *min_element(nums.begin(),nums.end());

        int result = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] > min && nums[i] < max) result++;
        }
        return result;
    }
};