class Solution {
public:
    int count=1;
    int nthUglyNumber(int n) {
        set<long>s;
        s.insert(1);
        long long int ans=1;
        while(n--){
            ans=*s.begin();
            s.erase(s.begin());
            s.insert(ans*2);
            s.insert(ans*3);
            s.insert(ans*5);
        }
        return ans;
    }
};
