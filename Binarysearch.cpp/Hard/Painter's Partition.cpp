#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
class Solution {
private:
    int countPainters(const vector<int>& arr, long long maxAllowedLength) {
        int painters = 1;
        long long currentBoardsLength = 0;
        for (int length : arr) {
            if (currentBoardsLength + length <= maxAllowedLength) {
                currentBoardsLength += length;
            } else {
                painters++;
                currentBoardsLength = length;
            }
        }
        return painters;
    }
public:
    int paint(int A, int B, vector<int>& C) {
        long long lo = *max_element(C.begin(), C.end());
        long long hi = accumulate(C.begin(), C.end(), 0LL);
        long long ans = hi;
        long long mod = 10000003;
        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            if (countPainters(C, mid) <= A) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1; 
            }
        }
        return ((ans % mod) * (B % mod)) % mod;
    }
};
