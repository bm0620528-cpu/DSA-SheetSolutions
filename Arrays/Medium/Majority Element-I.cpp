class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();int count=0;int ele;
        for(int i=0;i<n;i++){
            if(count==0){
                count=1;
                ele=arr[i];
            }
            else if(arr[i]==ele){
                count++;
            }
            else{
                count--;
            }
        }
        int count1=0;
        for(int i=0;i<n;i++){
            if(arr[i]==ele){
                count1++;
            }
            if(count1>arr.size()/2)
            return ele;
        }
    return -1;
    }
};
