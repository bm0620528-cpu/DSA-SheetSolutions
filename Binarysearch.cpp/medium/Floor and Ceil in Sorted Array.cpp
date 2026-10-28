class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> arr, int x) {
    int n=arr.size();
    int lo=0;int hi=n-1;
    int floor=-1;
    int ciel=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]<=x){
            floor=arr[mid];
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    lo=0;hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]>=x){
            ciel=arr[mid];
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return{floor,ciel};
    }
};
