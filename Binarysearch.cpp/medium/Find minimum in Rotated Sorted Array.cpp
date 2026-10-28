class Solution {
public:
    int findMin(vector<int>& arr) {
        int ans=INT_MAX;
        int n=arr.size();int lo=0,hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[lo]<=arr[mid]){
                ans=min(ans,arr[lo]);
                lo=mid+1;
            }
            else{
                hi=mid-1;
                ans=min(ans,arr[mid]);
            }
        }
        return ans;
    }
};
