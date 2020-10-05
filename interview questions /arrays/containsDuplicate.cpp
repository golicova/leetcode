#include <iostream> 
#include <vector> 
#include <algorithm>

using namespace std; 

bool containsDuplicate(vector<int> &nums) {
    if(nums.size() == 0) return false;

    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size() - 1; i++){
            if (nums[i] == nums[i+1]) return true;
    }
    return false;
}



int main() {
    // input: [1,2,3,1]
    // output: true 
    vector<int> vect1 {1, 2, 3, 1};
    cout << containsDuplicate(vect1) << endl;
    

    // input: [1,2,3,4]
    // output: false 
    vector<int> vect2 {1, 2, 3, 4};
    cout << containsDuplicate(vect2) << endl;


    // input: [1,1,1,3,3,4,3,2,4,2]
    // output: true 
    vector<int> vect3 {1,1,1,3,3,4,3,2,4,2};
    cout << containsDuplicate(vect3) << endl;

    return 0; 
}