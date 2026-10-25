class Solution {
public:
    vector<int> unionArray(vector<int>& a, vector<int>& b) {
        int m = a.size();
        int n = b.size();
        vector<int> c;
        int i = 0, j = 0;
        
        while (i < m && j < n) {
            if (a[i] <= b[j]) {
                if (c.size() == 0 || c.back() != a[i]) {
                    c.push_back(a[i]);
                }
                i++;
            } else {
                if (c.size() == 0 || c.back() != b[j]) {
                    c.push_back(b[j]);
                }
                j++;
            }
        }
        
        while (i < m) {
            if (c.size() == 0 || c.back() != a[i]) {
                c.push_back(a[i]);
            }
            i++;
        }
        
        while (j < n) {
            if (c.size() == 0 || c.back() != b[j]) {
                c.push_back(b[j]);
            }
            j++;
        }
        
        return c;
    }
};
