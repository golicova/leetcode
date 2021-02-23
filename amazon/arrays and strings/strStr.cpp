//c++ -std=c++11 strStr.cpp

#include <iostream> 
#include <vector>  
#include <algorithm> 
#include <climits>

using namespace std; 

/*
    assignment: 
        return the index of the first occurrence of needle in haystack, 
        or -1 if needle is not part of haystack.
    
    my thought process: 
        
    time complexity: 
*/

int strStr(string haystack, string needle) {
    if(needle == "") 
    return 0; 

    int found = haystack.find(needle); 
    // can also use if(found != string::npos)
    if(found != -1)
        return found; 
    return -1; 
}

int main() {

}