class Solution {
public:
    int balancedString(string s) {
        int n = s.size();
        int target = n/4;

        unordered_map<char,int> freq;

        for(char c: s){
            freq[c]++;
        }
        if(freq['Q'] == target && freq['W'] == target && freq['E'] == target && freq['R'] == target)
        return 0;

        int left = 0;
        int ans =  n;

        for(int right = 0;right < n;right++){
            freq[s[right]]--;

            while(freq['Q'] <= target && freq['W'] <= target && freq['E'] <= target && freq['R'] <= target) {
                ans = min(ans,right - left + 1);
                freq[s[left]]++;
                left++;
            }
        }
        return ans;
    }
};