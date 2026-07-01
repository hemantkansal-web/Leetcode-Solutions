class Solution {
public:
    int minOperations(string s) {
        int cnt = 0 , cnt1 = 0;
        for(int i = 0 ; i<s.size() ; i++){
            if(i%2 == 0) if(s[i] == '1') cnt1++;else cnt++;
            else if(s[i] == '1') cnt++ ; else cnt1++;
        }
        return min(cnt , cnt1);
    }
};