class Solution {
private:
    int findmaxi(vector<int> &v){
        int maxi = INT_MIN;
        int n = v.size();
        for(int i = 0; i < n; i++){
            maxi = max(maxi, v[i]);
        }
        return maxi;
    }
    long long calculatehrs(vector<int> &v, int hourly){
        long long totalh = 0;
        int n = v.size();
        for(int i = 0; i < n; i++){
            //totalh += ceil((double)v[i]/(double)hourly);
            totalh += (v[i] + hourly - 1) / hourly;//for better time complexity .. upar wala bhi sahi hai
        }
        return totalh;
    }
public:
    int minEatingSpeed(vector<int>& v, int H) {
        int lo = 1; 
        int hi = findmaxi(v);
        int ans = hi;
        
        while(lo <= hi){
            int mid = lo + (hi - lo) / 2;
            long long totalh = calculatehrs(v, mid);
            
            if(totalh <= H){
                ans = mid;  
                hi = mid - 1;  
            } else {
                lo = mid + 1;
            }
        }
        return ans;
    }
};
