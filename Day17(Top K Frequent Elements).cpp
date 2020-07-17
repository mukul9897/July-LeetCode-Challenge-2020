class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto i:nums) 
            mp[i]++;
            
        vector<pair<int,int>>v;
        for(auto i:mp) 
            v.push_back({i.second,i.first});
            
        sort(v.begin(),v.end());
        int count=0;
        vector<int>v1;
        
        for(auto j:v){
            if(count>=v.size()-k) 
                v1.push_back(j.second);
            count++;
        }
        return v1;
    }
};
