class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> arr) {
        long long  n=arr.size();
        long long sn=(n*(n+1)/2);
        long long s2n=(n*(n+1)*(2*n+1))/6;
        long long s=0,s2=0;
        for(int i=0;i<n;i++){
            s+=arr[i];
            s2+=(long long)arr[i]*(long long)arr[i];
        }
        long long val1=sn-s;
        long long val2=s2n-s2;
        long long val3=val2/val1;
        long long x=(val3+val1)/2;
        long long y=x-val1;
        return{int(y),int(x)};
    }
};
