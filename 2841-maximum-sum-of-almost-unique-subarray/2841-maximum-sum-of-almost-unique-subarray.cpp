class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        int n = nums.size();

        unordered_map<int,int> freq;
        long long sum = 0;
        long long ans = 0;
         
        //Build the first window
        for(int i = 0;i < k;i++){
            sum += nums[i];
            freq[nums[i]]++;
        }
        //Check the first window
        if(freq.size() >= m){
            ans = sum;
        }
        //Slide the window
        for(int i = k;i < n;i++){
            //remove the outgoing element
            sum -= nums[i-k];
            freq[nums[i-k]]--;
        
              if (freq[nums[i - k]] == 0) {
                freq.erase(nums[i - k]);
            }
        //Add the incoming element
        sum += nums[i];
        freq[nums[i]]++;

        if(freq.size() >= m){
            ans = max(ans,sum);
        }
        }
        return ans;
    }
};