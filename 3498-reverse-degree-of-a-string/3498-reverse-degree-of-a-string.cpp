class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i = 0;i < s.length();i++){
            int value = 26 - (s[i] - 'a');
            sum += value * (i+1);
        }
        return sum;
    }
};