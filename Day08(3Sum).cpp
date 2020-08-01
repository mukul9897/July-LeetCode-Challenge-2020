class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>s;
        vector<vector<int> >v;
        if(nums.size()<3) return v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i==0 || nums[i]!=nums[i-1]){
                int l=i+1,r=nums.size()-1;
                while(l<r){
                    int sum=nums[i]+nums[l]+nums[r];
                    if(sum==0){
                        vector<int>v2;
                        v2.push_back(nums[i]);
                        v2.push_back(nums[l]);
                        v2.push_back(nums[r]);
                        sort(v2.begin(),v2.end());
                        s.insert(v2);
                        l++; r--;
                    }
                    else if(sum<0) l++;
                    else r--; 
                }
            }
        }
        for(auto i:s) v.push_back(i);
        return v;
    }
};
