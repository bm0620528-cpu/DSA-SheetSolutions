class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
      int max = INT_MIN; int smax = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (i + 1 < nums.size() && nums[i] == nums[i + 1]) continue;
            if (nums[i] > max) {
                smax = max;
                max = nums[i];
            } else if (nums[i] > smax && nums[i] != max) {
                smax = nums[i];
            }
        }
        if (smax == INT_MIN) {
            return -1;
        } else {
            return smax;
        }
    }
};
