#include <iostream>
#include <string>

using namespace std; 

int strStr(string haystack, string needle) {
    if(needle == "") 
        return 0; 

    int found = haystack.find(needle);
    // npos is a constant static member value with the greatest 
    // possible value for an element of type size_t.
    // "until the end of string"
    // npos = no position 
    
    if(found != string::npos)
        return found; 
    return -1; 
}

int main() {

}