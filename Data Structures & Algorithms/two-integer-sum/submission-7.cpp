class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;
        for (int i = 0; i< nums.size();i++){
                hashmap.insert({target-nums.at(i), i});
            }
        for(int i = 0; i < nums.size();i++){
            if(hashmap.find(nums.at(i))!=hashmap.end() && hashmap[nums.at(i)] != i){
                int j = hashmap[nums[i]];
                return {min(i, j), max(i, j)};
            }
        }
    }
};
