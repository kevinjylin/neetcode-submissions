class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;
        vector<string> copy = strs;
        vector<vector<string>> finalvec;
        for (int i = 0; i < strs.size(); i++) {
            sort(strs.at(i).begin(), strs.at(i).end());
            if (hashmap.find(strs.at(i)) != hashmap.end()) {
                hashmap[strs.at(i)].push_back(copy.at(i));
            } else {
                vector<string> temp = {copy.at(i)};
                hashmap.insert({strs.at(i), temp});
            }
        }
        for(auto& pair: hashmap){
            finalvec.push_back(pair.second);
        }
        return finalvec;
    }
};
