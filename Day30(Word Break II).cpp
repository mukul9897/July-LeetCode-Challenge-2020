class Solution {
    unordered_map<string,vector<string>>dp;
public:
    vector<string> wordBreak(string s, vector<string>& w) {
        if(dp.find(s)!=dp.end()) return dp[s];
        vector<string>result;
        for(string i:w){
            if(s.substr(0,i.length()) == i){
                if(i.length()==s.length()) result.push_back(i);
                else{ 
                    vector<string> temp=wordBreak(s.substr(i.length()),w);
                    for(string t:temp) 
                        result.push_back(i+" "+t);   
                }
            }
        }
        dp[s]=result;
        return result;
    }
};
