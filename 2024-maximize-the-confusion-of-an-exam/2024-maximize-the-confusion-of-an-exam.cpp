class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {

        int left = 0;
        int maxfreq = 0;
        int ans = 0;

        unordered_map<char, int>freq;
        for(int right = 0;right < answerKey.size(); right++){
            freq[answerKey[right]]++;

            maxfreq = max(maxfreq,freq[answerKey[right]]);
            while((right - left + 1) - maxfreq > k){
                freq[answerKey[left]]--;
                left++;
            }
            ans = max(ans,right - left + 1);
        }
        return ans;
    }
};