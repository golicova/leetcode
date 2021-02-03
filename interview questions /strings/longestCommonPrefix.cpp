//c++ -std=c++11 longestCommonPrefix.cpp 

#include <iostream> 
#include <vector> 

using namespace std; 

string longestCommonPrefix(vector<string>& strs) {
    string answer = ""; 
    int j = 0; 
    int size = strs.size(); 

    if(size == 0)
        return strs[0];

    if(size == 1) 
        return "";

    // sorts alpahbetically 
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[size - 1];

    int limit = min(first.length(), last.length());
    for(int i = 0; i < limit; i++) {
        if(first[i] == last[i]) {
            answer += first[i];
        }
        else break; 
    }
    return answer; 
}

int main() {

}