class Solution {
public:
    int largestElement(vector<int>& nums) {
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max)max=nums[i];
        }
        return max;
    }
};
