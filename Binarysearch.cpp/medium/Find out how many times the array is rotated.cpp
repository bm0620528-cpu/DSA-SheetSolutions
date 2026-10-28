class Solution {
public:
    int findKRotation(vector<int> &arr)  {
        int n=arr.size();
        int lo=0;int hi=n-1;
        int mini=INT_MAX;
        int index=-1;
        while(lo<=hi){
            int mid = lo + (hi - lo) / 2;
            if(arr[lo]<=arr[hi]){
                if(arr[lo]<mini){
                    index=lo;
                    mini=arr[lo];
                }
                break;
            }
            if(arr[lo]<=arr[mid]){
                if(arr[lo]<mini){
                    index=lo;
                    mini=arr[lo];
                }
                lo=mid+1;
            }
            else{
                hi=mid-1;
                if(arr[mid]<mini){
                    index=mid;
                    mini=arr[mid];
                }
            }
        }
        return index;
    }
};
