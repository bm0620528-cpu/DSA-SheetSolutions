class Solution{
public:
    int lowerBound(vector<int> &arr, int x){
        int n=arr.size();
        int lo=0;int hi=n-1;
        int ans=n;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]<x){
                lo=mid+1;

            }
            else{
                ans=mid;
                hi=mid-1;
            }
        }
        return ans;
    }
};
