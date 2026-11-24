class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
    vector<int>ans(2,-1);
    int lo=0;int hi=arr.size()-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]<target)lo=mid+1;
        else if(arr[mid]>target)hi=mid-1;
        else{
            ans[0]=mid;
            hi=mid-1;
        }
    }
    lo=0;hi=arr.size()-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]<target)lo=mid+1;
        else if(arr[mid]>target)hi=mid-1;
        else{
            ans[1]=mid;
           lo=mid+1;
        }
    }
    return ans;   
    }
};
