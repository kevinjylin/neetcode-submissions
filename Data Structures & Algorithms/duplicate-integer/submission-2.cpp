class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
         for(int i = 0;i<nums.size();i++){
            for(int k = 0; k<nums.size();k++){
                if(i!=k){
                if(nums.at(i)==nums.at(k)){
                    return true;
                }
                }
            }
         }
         return false;
        }
            
        
    
};