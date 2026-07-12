class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted_arr = arr;

        sort(sorted_arr.begin(),sorted_arr.end());

        unordered_map<int,int> rankMap;
        int rank = 0;

        for(int num : sorted_arr){
            if(rankMap.find(num) == rankMap.end()){
                rank++;
                rankMap[num] = rank;
            }
        }
        vector<int> result;
        for(int num: arr){
            result.push_back(rankMap[num]);
        }
        return result;
    }
};