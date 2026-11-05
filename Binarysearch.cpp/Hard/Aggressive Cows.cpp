class Solution {
    private:
    bool canweplace(vector<int> &arr,int dist,int cow){
        int countcow=1;int last=arr[0]; 
        for(int i=0;i<arr.size();i++){
            if(arr[i]-last>=dist){
                countcow++;
                last=arr[i];
            }
        }
        if(countcow>=cow){
        return true;
        }
        return false;
    }
public:
    int aggressiveCows(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
      int lo=1;int hi=arr[n-1]-arr[0];
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(canweplace(arr,mid,k)==true){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return hi;
    }
};
