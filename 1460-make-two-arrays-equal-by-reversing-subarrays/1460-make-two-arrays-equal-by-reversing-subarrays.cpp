class Solution {
public:
    bool canBeEqual(std::vector<int>& target, std::vector<int>& arr) {
        std::unordered_map<int,int> targetFreq;
        std::unordered_map<int,int> arrFreq;

        for(int num: target){
            targetFreq[num]++;
        }
        for(int num: arr) {
            arrFreq[num]++;
        }
        return targetFreq == arrFreq;
    }
};