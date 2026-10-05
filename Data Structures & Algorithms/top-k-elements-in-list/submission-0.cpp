class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> finalvec;
    unordered_map<int, int> hashmap;
    for(int i : nums) {
        hashmap[i]++;
    }
    priority_queue<pair<int,int>> heap;
    for(auto& p : hashmap){
        heap.push({p.second, p.first});
    }
    for(int i =0; i< k;i++){
    finalvec.push_back(heap.top().second);
    heap.pop();
    }
    return finalvec;
    }
};
