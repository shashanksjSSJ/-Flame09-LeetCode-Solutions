class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        set<pair<int,int>> st; 
        for(auto it: intervals){
            st.insert({it[0],it[1]}); 
        }

        int ans = intervals.size()-st.size(); 
        vector<vector<int>> temp ; 
        for(auto it: st){
            vector<int> t; 
            t.push_back(it.first); 
            t.push_back(it.second);
            temp.push_back(t);  
        }
        int prevEnd = temp[0][1]; 

        for(int i=1; i<temp.size(); i++){
            if(temp[i][0]>=prevEnd){
                prevEnd = temp[i][1]; 
            }
            else{
                ans ++ ; 
                prevEnd = min(prevEnd, temp[i][1]); 
            }
        }
        return ans; 
    }
};