#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        char(ch)=s[i];
        if(ch>=65&&ch<=90)ch+=32;
        else if(ch>=97&&ch<=122)ch-=32;
        s[i]=ch;
    }
    cout<<s<<endl;
}
