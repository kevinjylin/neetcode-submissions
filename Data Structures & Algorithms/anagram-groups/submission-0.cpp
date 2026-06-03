class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> arr;
        unordered_map<string, vector<string>> um;
        for (auto w : strs) {
            string temp = w;
            sort(temp.begin(), temp.end());
            if (!um.contains(temp)) {
                um[temp].push_back(w);
            } else if (um.contains(temp)) {
                um[temp].push_back(w);
            }
        }
        for (auto w : strs) {
            string temp = w;
            sort(temp.begin(), temp.end());
            if (find(arr.begin(), arr.end(), um[temp]) == arr.end()) {
                arr.push_back(um[temp]);
            }
        }
        

        return arr;
    }
};
