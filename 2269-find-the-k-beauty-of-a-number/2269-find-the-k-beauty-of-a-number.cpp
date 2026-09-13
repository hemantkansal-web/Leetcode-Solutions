class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int ans = 0;
        int left = 0;
        string s = to_string(num);

        for(int right = 0;right < s.size();right++){

            if(right-left+1 == k) {
                string sub = s.substr(left,k);

                int x = stoi(sub);

                if(x != 0 && num % x == 0)
                ans++;

                left++;
            }
        }
        return ans;
    }
};