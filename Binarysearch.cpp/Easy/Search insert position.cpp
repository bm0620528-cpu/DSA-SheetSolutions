class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n=arr.size();
        int lo=0;int hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]<target){
                lo=mid+1;
            }
            else if(arr[mid]>target){
                hi=mid-1;
            }
            else{
                return mid;
            }
        }
        return lo;
    }
};
