class Solution {
public:
    string addBinary(string a, string b) {
        int l1=a.length(),l2=b.length(),rem=0;
        string s="";
        if(l2>l1){
            int temp=l1;
            l1=l2;
            l2=temp;
            string t1=a;
            a=b;
            b=t1;
        }
        int i=l1-1,j=l2-1;;
        while(i>=0){
            while(j>=0){
                int sum=(a[i]-'0')+(b[j]-'0')+rem;
                if(sum==3){
                    s="1"+s;
                    rem=1;
                }
                else if(sum==2){
                    s="0"+s;
                    rem=1;
                }
                else if(sum==1){
                    s="1"+s;
                    rem=0;
                }
                else{
                    s="0"+s;
                    rem=0;
                }
                j--;i--;
            }
            if(rem==1 && i>=0){
                if(a[i]=='1'){
                    s="0"+s;
                    rem=1;
                }
                else{
                    s="1"+s;
                    rem=0;
                }
            }
            else if(i>=0) s=a[i]+s;
            i--;
        }
        if(rem==1) s="1"+s;
        return s;
    }
};
