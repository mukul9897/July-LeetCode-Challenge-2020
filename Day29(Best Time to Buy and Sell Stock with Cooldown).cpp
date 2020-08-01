class Solution {
public:
    int maxProfit(vector<int>& p) { 
        if(p.size()<=1) return 0;
        int A=0,B=-p[0],C=0;
        for(int i=0;i<p.size();i++){
            int temp=A;
            A=max(A,C);
            C=B+p[i];
            B=max(B,temp-p[i]);
        }
        return max(A,C);
    }
};
