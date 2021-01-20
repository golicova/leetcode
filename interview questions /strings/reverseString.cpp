//c++ -std=c++11 

#include <iostream>
#include <vector> 
#include <algorithm> 

using namespace std; 

void reverseString(vector<char>& s) {
    reverse(s.begin(), s.end());
}

int main() {

    vector<char> myString = {'h','e','l','l','o'};
    reverseString(myString); 

    for(int i = 0; i < myString.size(); i++){
        cout << "'" <<myString[i] << "'" << " ";
    
    }

    return 0; 
}