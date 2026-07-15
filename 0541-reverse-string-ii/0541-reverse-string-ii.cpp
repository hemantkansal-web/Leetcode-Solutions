class Solution {
public:
    string reverseStr(string s, int k) {
        int step = 2*k; //this is a block size
        for(int i = 0;i< s.length();i += step){
            int start = i;
            int end = min(i + k - 1,(int)s.length()-1); //Normally, first k characters ka last index hoga i + k - 1.
//Lekin agar string chhoti hai aur i + k - 1 string ke range se bahar chala jaaye, toh hum s.length() - 1 (string ka actual last index) le lete hain.
         while(start < end){
            swap(s[start],s[end]);
            start++;
            end--;
         }
        }
        return s;
    }
};