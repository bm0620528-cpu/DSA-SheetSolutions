class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int k=0;int n=arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[k]){
                arr[k+1]=arr[i];
                k++;
            }
        }
    return k+1;
    }
};
