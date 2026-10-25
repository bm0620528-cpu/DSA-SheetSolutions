class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
     int max=INT_MIN;int n=arr.size();
        if(n==0)return{};
    vector<int>ans;
        int max={n-1};
        ans.push_back(arr[n-1]);
     for(int i=n-2;i>=0;i--){
     if (arr[i] > max){
        ans.push_back(arr[i]);
        max=arr[i];
     }
    }
    reverse(ans.begin(),ans.end());
     return ans;
    }
};
