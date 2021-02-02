//c++ -std=c++11 validPalindrome.cpp 

#include <iostream>
#include <locale>
#include <stdio.h>
#include <ctype.h>

using namespace std; 

  bool isPalindrome(string s) {
    // isalnum returns true if the characted passed is a digit / alpahbet 
    // i and j are my two pointers
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
        
        // skip + increment i 
        while (i < j && !isalnum(s[i]))
            i++;
        // skip + decrement j 
        while (i < j && !isalnum(s[j]))
            j--;

        // comapre, return false if false
        if (tolower(s[i]) != tolower(s[j]))
            return false;
    }
    // if all passed, return true 
    return true;
  }

int main() {
    cout << isPalindrome("race a car") << endl; 
}