//c++ -std=c++11 validAnagram.cpp 

#include <iostream>
#include <stack> 
#include "unordered_map"

using namespace std; 

bool isAnagram(string s, string t) {
    if(s.length() != t.length()) return false; 

    int n = s.length(); 
    unordered_map<char, int> counts; 
    for(int i = 0; i < n; i++) {
        counts[s[i]]++;
        counts[t[i]]--;
    }

    for(auto i : counts) {
        if(i.second) return false; 
    }
    return true;
}

int main() {
    cout << isAnagram("anagram", "nagaram") << endl;
}