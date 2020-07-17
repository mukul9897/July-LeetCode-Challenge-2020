class Solution {
public:
    string reverseWords(string s) {
        int l=s.length();
        int i=l-1;
        string s1,s2;
        while(i>=0){
            if(s[i]==' '){
                s1.append(s2);
                while(s[i]==' ' && i>0) i--;
                if(i!=0) i++;
                if(!s1.empty() || i==0){
                    if(i==0 && s[i]!=' ' && s1.empty()) s1.push_back(s[i]);
                    else if(i==0 && s[i]!=' '){ s1.append(" "); s1.push_back(s[i]);}
                    else if(i!=0) s1.push_back(s[i]);
                } 
                s2="";
            }
            else if(i==0 && s[i]!=' '){
                s2.insert(s2.begin(),s[i]);
                s1.append(s2);
            }
            else{
                s2.insert(s2.begin(),s[i]);
            }
            i--;
            
        }
        return s1;   
    }
};
