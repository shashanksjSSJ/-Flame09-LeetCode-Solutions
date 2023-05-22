class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ump ; 
            vector<int> ans; 
            for(int i=0; i<nums.size(); i++){
                ump.insert({nums[i], i});  
            }
            for(int i=0; i<nums.size(); i++){
                if(ump.find((target-nums[i]))!=ump.end()){
                    if(ump[(target-nums[i])]!=i){
                        ans.push_back(i); 
                        ans.push_back(ump[(target-nums[i])]); 
                        return ans; 
                    }
                }
            }
        return ans; 
    }
};