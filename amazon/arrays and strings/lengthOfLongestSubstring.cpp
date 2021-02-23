//c++ -std=c++11 lengthOfLongestSubstring.cpp

#include <iostream>
#include <set>
#include <cmath> 

using namespace std; 

/*
    assignment: 
        given a string s, find the length of the longest substring without repeating characters.
    
    my thought process: 
        first, taking care of my edge cases:
        --> if sting is empty, return 0. 

        I want to sue the "sliding window" approach.
        1. i, j, max initialized to 0. 
        2. set initialized to empty. 
        3. take first letter and compare it to the set. 
        --> if not in the set, add. 
        --> compute max (compare current max to i - j + 1)
        --> move on to the next character. 
        --> if not in the set, add. 
        --> move on to the next char. 
        --> if char is in set, remove every char in the set that j points to and incrememnt j. 
        4. return max. 

    time complexity: O(n)
    --> looks like n^2 because nested because of the two while loops 
    --> worst case, the two pointers (i, j) would have to touch every single char
    space complixity O(n)

    good video explanation: https://www.youtube.com/watch?v=4i6-9IzQHwo&ab_channel=MichaelMuinos
*/

int lengthOfLongestSubstring(string s) {
    if(s.length() == 0)
        return 0; 

    int i = 0, j = 0, myMax = 0; 
    set<char> mySet; 

    while(i < s.length()) {
        char c = s[i];
        while(mySet.find(c) != mySet.end()) {
            mySet.erase(s[j]);
            ++j; 
        }
        mySet.insert(c);
        myMax = max(myMax, i - j + 1);
        ++i;
    }
    return myMax; 
}

int main()  {
    cout << lengthOfLongestSubstring("pwwkew") << endl;
} 

