class Solution {
public:
    int maximumCount(vector<int>& arr) {
        int m=arr.size();
        int firstnonneg=m;
        int lo=0; int hi=m-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]>=0){
            firstnonneg=mid;
            hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        int negcount=firstnonneg;
        int pos=m;
        lo=0;hi=m-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]>0){
                pos=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        int poscount=m-pos;
        return max(poscount,negcount);
    }
};
