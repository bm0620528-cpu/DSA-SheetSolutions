class Solution {
    private:
    int finddays(vector<int>&weights,int cap){
        int days=1;int load=0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]+load>cap){
                days+=1;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int lo = *max_element(weights.begin(), weights.end());
        int hi = accumulate(weights.begin(), weights.end(), 0);
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int numberofdays=finddays(weights,mid);
            if(numberofdays<=days){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return lo;
    }
};
