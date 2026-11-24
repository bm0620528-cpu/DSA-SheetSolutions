class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            reverse(arr[i].begin(), arr[i].end());
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                swap(arr[j][i], arr[i][j]);
            }
        }
    }
};
