//c++ -std=c++11 threeSumClosest.cpp

#include <iostream> 
#include <vector>  
#include <algorithm> 
#include <climits>


using namespace std; 

/*
    assignment: 
        given an array nums of n integers and an integer target, find three integers in nums such that the sum is closest to target. 
        return the sum of the three integers. 
        you may assume that each input would have exactly one solution.
    
    my thought process: 
        sort the array in ascending order. 
        just like in the threeSum, set this up: 

        [-4, -1, -1, 0, 1, 2]
         i    j            k

        the only differene is that you will keep track of 1 more variable, min. 
        min is the absolute value of sum - target. 
        that way, you return the "closest" value in case there is no exact some. 

    time complexity: 
*/

int threeSumClosest(vector<int>& nums, int target) {
    int result = 0; 
    int sum = 0; 
    int size = nums.size();
    int min = INT_MAX;

    sort(nums.begin(), nums.end()); 

    for(int i = 0; i < size - 2; i++) {
        if(i == 0 || nums[i] != nums[i - 1]) {
            int left = i + 1; 
            int right = size - 1; 

            while(left < right) {
                sum = nums[i] + nums[left] + nums[right];

                if (sum == target) return sum; 
                else if (sum < target) left++; 
                else right--; 

                if(abs(sum - target) < min) {
                    result = sum; 
                    min = (abs(sum - target)); 
                }
            }
        }
    }
    return result; 
}

int main() {

}