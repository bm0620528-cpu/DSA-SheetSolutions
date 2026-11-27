#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int n = 0;
    while (s[n] != '\0') {
        n++;
    }
    if (n % 2 != 0) {
        cout << "Error: String length must be even." << endl;
        return 1;
    }
    int start = 0;
    int end = (n / 2) - 1;
    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
    cout << s << endl;
    return 0;
}
