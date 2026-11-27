class Solution {
    bool notvalid(char ch){
        if(ch>=65&&ch<=90)return false;
        else if(ch>=97&&ch<=122)return false;
        else if(ch>=48&&ch<=57)return false;
        else{
            return true;
        }
    }
public:
    bool isPalindrome(string s) {
        //CODE IT BY URSELF
        int n=s.length();
        int i=0;int j=n-1;
        while(i<j){
            char x=s[i],y=s[j];
            if(x>=65&&x<=90)x+=32;
            if(y>=65&&y<=90)y+=32;
            if(notvalid(x))i++;
            else if(notvalid(y))j--;
            else{
                if(x!=y)return false;
                i++;j--;
            }
        }
        return true;
    }
};
