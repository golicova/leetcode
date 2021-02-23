//c++ -std=c++11 romanToInt.cpp
#include <iostream> 
#include "unordered_map"

using namespace std; 

/*
    assignment: 
        given a roman numeral, convert it to an integer.
        I can be placed before V (5) and X (10) to make 4 and 9. 
        X can be placed before L (50) and C (100) to make 40 and 90. 
        C can be placed before D (500) and M (1000) to make 400 and 900.

        1 <= s.length <= 15
        s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
        it is guaranteed that s is a valid roman numeral in the range [1, 3999].

        Symbol       Value
        I            1
        V            5
        X            10
        L            50
        C            100
        D            500
        M            1000
        
    time complexity: 
*/

int romanToInt(string s) {
    if(s.length() == 0) {
        return -1; 
    }

    // initialize a map 
    unordered_map<char, int> roman; 
    roman['I'] = 1; 
    roman['V'] = 5; 
    roman['X'] = 10; 
    roman['L'] = 50; 
    roman['C'] = 100; 
    roman['D'] = 500; 
    roman['M'] = 1000; 

    int length = s.length(); 
    // initialize with the last int of the roman number 
    int result = roman[s[s.length() - 1]]; 

    // loop backwards
    // start at lenght - 2 because we already addded length - 1 to our result 
    for(int i = length - 2; i >= 0; i--) {
        if(roman[s[i]] >= roman[s[i + 1]]) {
            result += roman[s[i]];
        } else {
            result -= roman[s[i]];
        }
    }
    return result; 
}

int main() {

}
