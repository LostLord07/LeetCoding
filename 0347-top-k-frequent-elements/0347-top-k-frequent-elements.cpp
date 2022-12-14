class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> pq;
        vector<int> res; 
        
        for (auto &i: nums){mp[i]++;}
        for (auto &i: mp){pq.push({i.second, i.first});}
        
        while(k--){
            res.push_back(pq.top().second); pq.pop();
        }
        
        return res;
    }
};