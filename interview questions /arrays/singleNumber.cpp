//c++ -std=c++11 singleNumber.cpp

#include <iostream> 
#include <vector> 
#include <stack>
#include <algorithm>

using namespace std; 
int singleNumber(vector<int>& nums) {
    int result = 0; 
        
    for (int i = 0; i < nums.size(); i++) {
            result ^= nums[i];
    }
    return result; 
}

int main() {
    // input: nums = [2,2,1]
    // output: 1
    vector <int> vect1 = {2, 2, 1}; 
    cout << singleNumber(vect1) << endl; 


    // input: nums = [4,1,2,1,2]
    // output: 4
    vector <int> vect2 = {4,1,2,1,2}; 
    cout << singleNumber(vect2) << endl; 

    // input: nums = [1]
    // output: 1
    vector <int> vect3 = {1}; 
    cout << singleNumber(vect3) << endl; 

    return 0; 
}











