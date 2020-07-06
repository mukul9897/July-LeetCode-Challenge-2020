class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& c, int N) {
       unordered_map<string,int>mp;
        
        for(int i=0;i<N;i++){
            string s=string(c.begin(),c.end());
            if(mp.find(s)!=mp.end()){
                int ll=i-mp[s];
                int rd=(N-i)%ll;
                return prisonAfterNDays(c,rd);
            }
            else{
                mp.insert({s,i});
                int prev=c[0];
                for(int j=1;j<7;j++){
                    int next=c[j+1];
                    int cur=c[j];
                    c[j]=prev==next;
                    prev=cur;
                }
            }
            c[0]=0;c[7]=0;
        }
        return c;
    }
};
