class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;
        for(int i= 0;i<nums.size();i++){
            int temp = target-nums[i];
            if(um.find(temp) != um.end()){
                if(i<um[temp]){
                return {i, um[temp]};
                }
                else{
                    return {um[temp], i};
                }
            }
            um[nums[i]] = i;
        }
    }
};
