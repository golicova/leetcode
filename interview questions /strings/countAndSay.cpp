//c++ -std=c++11 countAndSay.cpp 

#include <iostream>

using namespace std; 
// n = 5
string countAndSay(int n) {
    string s = "1";
    while(--n) {
        string ns; 
        int i = 0; 
        while(i < s.size()) {
            int count = 1; 
            while(i + 1 < s.size() && s[i] == s[i + 1]) {
                ++i;
                ++count;  
            }

            ns += to_string(count) + s[i];
            ++i; 
            cout << ns << endl; 
        }
        s = ns;
    }
    return s;
}

int main() {
    cout << countAndSay(7) << endl;
}