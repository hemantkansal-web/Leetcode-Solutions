class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        set<double>st;

        int i = 0,j = nums.size()-1;
        while(i < j){
            double avg = ((double)nums[i] + (double)nums[j]) / 2;
            st.insert(avg);
            i++;
            j--;
        }
        return st.size();
    }
};