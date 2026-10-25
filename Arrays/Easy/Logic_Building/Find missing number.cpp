class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int sum=0;int totalsum=0;
        int n=arr.size();
        totalsum=n*(n+1)/2;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        cout<<sum;
        return totalsum-sum;
    }
};
