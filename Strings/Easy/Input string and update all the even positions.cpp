#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="BHargav MIShra";
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i+=2){
        s[i]='a';
    }
    cout<<s<<endl;
    return 0;
}
