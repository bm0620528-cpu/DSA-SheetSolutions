class Solution {
    private:
    int findmax(vector<int>&arr,int max){
        int divide=1;
        long long sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]+sum<=max){
                sum+=arr[i];
            }
            else{
                divide++;
                sum=arr[i];
            }
        }
        return divide;
    }
public:
    int findPages(vector<int> &arr, int m)  {
        int lo=*max_element(arr.begin(),arr.end());
        int hi=accumulate(arr.begin(),arr.end(),0);
        int n=arr.size();
        if(m>n)return -1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(findmax(arr,mid)>m){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return lo;
    }
};
