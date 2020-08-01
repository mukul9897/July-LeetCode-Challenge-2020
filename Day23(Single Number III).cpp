class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int>mp;
        vector<int>v;
        for(auto i:nums) mp[i]++;
        for(auto i:mp) 
            if(i.second%2==1) 
                v.push_back(i.first);
        return v;
    }
};
