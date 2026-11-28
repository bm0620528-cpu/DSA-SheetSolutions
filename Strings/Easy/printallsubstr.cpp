#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s="abcd";
    int n=s.length();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<s.substr(i,j)<<" ";
        }
        cout<<endl;
    }
    
}
