class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        int l=a.size();
        if(l==1){
           if(a[0]+1==10){
               a[0]=0; 
               a.insert(a.begin(),1);
           } 
           else a[0]++;
        }
        else{
            for(int i=l-1;i>=1;i--){
                if(a[i]+1==10 && i==l-1){ 
                    a[i]=0; 
                    a[i-1]++;
                }
                else if(a[i]==10){ 
                    a[i]=0; 
                    a[i-1]++;
                }
                else if(i==l-1) 
                    a[i]++;
            }  
            if(a[0]==10){ 
                a[0]=0; 
                a.insert(a.begin(),1);
            }
        }
        return a;
    }
};
