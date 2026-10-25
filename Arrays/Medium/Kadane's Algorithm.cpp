class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n=arr.size();
        long long sum=0;
        long long max=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>max)max=sum;
            if(sum<0)
            sum=0;
        }
        return max;
    }
};
