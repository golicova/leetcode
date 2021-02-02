//c++ -std=c++11 myAtoi.cpp 

#include <iostream>
#include <climits> 

using namespace std; 

int myAtoi(string s) {
    int result = 0; 
    int i = 0; 
    int sign = 1; 

    while(i < s.length() && s[i] == ' ') {
        i++;
    }

    // check the sign of the string
    if(s[i] == '-') {
        sign = 0;  
        i++; 
    }
    else if(s[i] == '+') {
        i++; 
    }

    long int out = 0; 

    // traverse the entire string and convert it to int
    while(s[i] - '0' >= 0 && s[i] - '0' <= 9) {
        out = out * 10; 
        if(out <= INT_MIN || out >= INT_MAX) {
            break; 
        }
        out = out + (s[i] - '0');
        i++;
    }

    if(sign == 0) {
        out = out * -1; 
    }

    if(out <= INT_MIN) {
        return INT_MIN; 
    }

    if(out  INT_MAX) {
        return INT_MAX; 
    }

    return (int) out; 
}

int main() {
    cout << myAtoi("   -42") << endl; 
}