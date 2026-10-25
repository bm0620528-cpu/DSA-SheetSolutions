class Solution {
public:
    vector<int> intersectionArray(vector<int>& a, vector<int>& b) {
        vector<int>c;
        int m=a.size();
        int n=b.size();
        int i=0,j=0;
        while(i<m&&j<n){
            if(a[i]<b[j]){
                i++;
            }
            else if(b[j]<a[i]){
                j++;
            }
            else{
                c.push_back(a[i]);
                i++;j++;
            }
        }
        
        return c;
    }
};
