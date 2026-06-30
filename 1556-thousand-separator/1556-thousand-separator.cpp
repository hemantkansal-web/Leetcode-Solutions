class Solution {
public:
    string thousandSeparator(int n) {
        if(n == 0)
        return "0";
        string ans = "";
        int count = 0;

        while(count != 3 &&n != 0){
            int rem = n % 10; //extracts the last digit of n
            ans += rem + '0'; //convert that digit into character form
            n /= 10; //strips off the digit
            count++;

            if(count % 3 == 0 && n != 0){
                ans += ".";
                count = 0;
            }
        }
        reverse(ans.begin(),ans.end()); //since digits were extracted from least signifciant to most signifcant "765.432.1"). reverse() flips it into the correct order, producing "1.234.567".

        return ans;
    }
};