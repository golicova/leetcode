//c++ -std=c++11 myAtoi.cpp

#include <iostream>
#include <limits.h>

using namespace std; 

/*
    assignment: 
        implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).

        the algorithm for myAtoi(string s) is as follows:

        1. read in and ignore any leading whitespace.
        2. check if the next character (if not already at the end of the string) is '-' or '+'. read this character in if it is either. 
           this determines if the final result is negative or positive respectively. Assume the result is positive if neither is present.
        3. read in next the characters until the next non-digit charcter or the end of the input is reached. 
           the rest of the string is ignored.
        4. convert these digits into an integer (i.e. "123" -> 123, "0032" -> 32). if no digits were read, then the integer is 0.   
           change the sign as necessary (from step 2).
        5. if the integer is output of the 32-bit signed integer range [-231, 231 - 1], then clamp the integer so that it remains in the range. 
           specifically, integers less than -231 should be clamped to -231, and integers greater than 231 - 1 should be clamped to 231 - 1.
        6. return the integer as the final result.   
    
    my thought process: 
        1. take care of white spaces. 
        2. take care of the sing.
        3. triverse the string and if you ecounter a number: 
           --> multiply output by 10 
           --> add the number itself to output 
        4. take care of overflows 

    time complexity: O(n)
*/

int myAtoi(string s) {
    int i = 0; 
    int sign = 1; 
    long int output = 0; 

    // taking care of white spaces 
    while(i < s.length() && s[i] == ' ') {
        i++;
    }

    // taking care of the sing 
    if(s[i] == '-') {}
        sign = 0;
        i++; 
    }
    else if(s[i] == '+') {
        i++; 
    }

    while(s[i] - '0' >= 0 && s[i] - '0' <= 9) {
        output = output * 10;
        if(output <= INT_MIN || output >= INT_MAX) {
            break; 
        }
        output = output + (s[i] - '0');
        i++;
    }

    if(sign == 0) {
        output *= -1; 
    }

    if(output <= INT_MIN) {
        return INT_MIN; 
    }

    if(output >= INT_MAX) {
        return INT_MAX; 
    }
    
    return (int) output; 
}

int main() {

}
