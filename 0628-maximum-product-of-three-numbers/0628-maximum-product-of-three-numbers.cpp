class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       int n = nums.size();
       sort(nums.begin(),nums.end());
       return max(nums[n-1]*nums[0]*nums[1],nums[n-1]*nums[n-2]*nums[n-3]);

    }
};

//nums[n-1]*nums[0]*nums[1] is used for creating huge positive product nums[0]*nums[1] should be (-)*(-) should be negative and nums[n-1] is always a greater element as it compare with product of last three elemet