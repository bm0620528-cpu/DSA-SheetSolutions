class Solution {
private:
    bool possible(vector<int>& bloomDay, int day, int m, int k) {
        int cnt = 0;
        int noOfB = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= day) {
                cnt++;
            } else {
                noOfB += (cnt / k);//If bloomDay[i] > day, the chain breaks: add cnt / k to bouquets and reset cnt = 0.
                cnt = 0;
            }
        }
        noOfB += (cnt / k);
        return noOfB >= m;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m * 1LL * k * 1LL;
        long long n = bloomDay.size();
        if (val > n) return -1; // impossible case

        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }

        int low = mini, high = maxi;
        int ans = high;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (possible(bloomDay, mid, m, k)) {
                ans = mid;
                high = mid - 1; // look for a smaller day on the left
            } else {
                low = mid + 1;  // look on the right
            }
        }
        return ans;
    }
};
