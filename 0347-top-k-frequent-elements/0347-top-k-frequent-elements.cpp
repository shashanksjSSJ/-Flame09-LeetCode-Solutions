class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       priority_queue<pair<int,int>> pq; 
       map<int,int> mp ; 
       for(auto it: nums){
           mp[it]++;
       }
       for(auto it: mp){
           pair<int,int> p ; 
           p.first = it.second; 
           p.second = it.first; 
           pq.push(p);
           cout<<it.first<<" "<<it.second<<endl; 
       }
        vector<int> ans; 
        while(k--){
            ans.push_back(pq.top().second); 
            pq.pop(); 
        }
       return ans; 
    }
};