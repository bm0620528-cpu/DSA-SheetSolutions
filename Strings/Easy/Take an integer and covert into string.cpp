#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cout<<"Enter n";
    cin>>n;
    string s=" ";
    while(n!=0){
        int lastdigit=n%10;
        char ch=lastdigit+48;
        s.push_back(ch);
        n/=10;
    }
    int i=0; int j=s.length()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;j--;
    }
    cout<<s<<endl;
}
