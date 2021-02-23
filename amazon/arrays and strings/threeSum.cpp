//c++ -std=c++11 threeSum.cpp

#include <iostream> 
#include <vector> 
#include <algorithm> 

using namespace std; 

/*
    assignment: 
        Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? 
        Find all unique triplets in the array which gives the sum of zero.

        Notice that the solution set must not contain duplicate triplets.   
    
    my thought process: 
        sort my array of numbers. 
        take a number and try to find a pair that addds / subtracts to / from it to 0. 
        --> reduces to twoSum

        to avoid duplicates, when picking a number to add / subtract to, check that the number to the right 
        is not the same.
        if it is, skip. 
        this is possible because we sorted our numbers first. 

        [-4, -1, -1, 0, 1, 2]
         i    j            k

        [-4, -1, -1, 0, 1, 2]
         i        j        k
        
        [-4, -1, -1, 0, 1, 2]
         i           j     k
         
    time complexity: O(n^2)
*/

// vector of vectors 
vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size(); 
    if(n < 3) return {};
    
    vector<vector<int>> result; 
    sort(nums.begin(), nums.end());
    // last two elements are j and k 
    for(int i = 0; i < n - 2; ++i) {
        // if at the beginning or i != i - 1 
        if(i == 0 || nums[i] != nums[i - 1]) {
            // setting pointers
            int j = i + 1; 
            int k = n - 1; 
            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0) {
                    result.push_back({nums[i], nums[j], nums[k]});
                    // reducing duplicates again 
                    // check if j is repeated
                    while(j < k && nums[j] == nums[j + 1]) j++;
                    // check if k is repeated 
                    while(j < k && nums[k] == nums[k - 1]) k--; 
                    // if no duplicated, still increment / decrement 
                    j++; k--; 
                }
                else if(sum > 0) k--; 
                // sum < 0
                else j++; 
            } 
        }
    }
    return result;
}

int main() {

}