class Solution {
public:
    double angleClock(double hour, double minutes){
        if(hour==12.00) hour=0.00;
        
        double ans=abs(hour+minutes/60-(minutes/5))*30;
        
        if(ans>180.00) return 360.00-ans;
        
        return ans;
    }
};
