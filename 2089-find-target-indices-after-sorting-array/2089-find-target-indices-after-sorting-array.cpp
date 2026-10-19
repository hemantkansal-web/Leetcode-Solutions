class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
       sort(nums.begin(),nums.end());

       int start = 0;
       int count = 0;

       for(int num: nums){
        if(num < target){
            start++;
        }
        else if(num == target)
        count++;
       } 

       vector<int> ans;
       for(int i = start;i < start + count;i++){
        ans.push_back(i);
       }
       return ans;
    }
};