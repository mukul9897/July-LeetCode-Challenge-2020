class Solution {
public:
    int findMin(vector<int>& nums) {
        int min1=INT_MAX;
        for(auto i:nums) 
            min1=min(min1,i);
        return min1;
    }
};
