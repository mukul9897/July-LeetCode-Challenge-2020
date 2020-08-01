class Solution {
public:
    int islandPerimeter(vector<vector<int>>& g) {
        int l=g.size(),sum=0;
        int l1=g[0].size();
        for(int i=0;i<l;i++){
            for(int j=0;j<l1;j++){
                if(g[i][j]==1){
                    if(i-1<0) sum++;
                    else if(g[i-1][j]==0) sum++;
                    if(j-1<0) sum++;
                    else if(g[i][j-1]==0) sum++;
                    if(i+1>=l) sum++;
                    else if(g[i+1][j]==0) sum++;
                    if(j+1>=l1) sum++;
                    else if(g[i][j+1]==0) sum++;
                }
            }
        }
        return sum;
    }
};
