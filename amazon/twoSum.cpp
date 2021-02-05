//c++ -std=c++11 twoSum.cpp

#include <iostream> 
#include <vector>  
#include <unordered_map> 

using namespace std; 

/*
    assignment: 
        given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
        you may assume that each input would have exactly one solution, and you may not use the same element twice.
        you can return the answer in any order.
    
    my thought process: 
        I need to compare each number to the neighbour, if it adds up to target --> push the indexes to your return array. 
        I have to make sure that the numbers don't overlap, otherwise it can add up on the same number 
        --> so make j = i + 1, that way it always to the spot ahead of i 

    time comlexity: O(n^2)
*/

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> answer; 
    vector<int> noAnswer = {-1}; 
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i] + nums[j] == target) {
                answer.push_back(i);
                answer.push_back(j);
                return answer; 
            }
        }
    }
    return noAnswer;
}

// how can I imporove this code with an unordered map?
// this runs in O(n)

vector<int> twoSumImproved(vector<int> nums, int target) {
    vector<int> answer(2); 
    unordered_map<int, int> umap; 

    for(int i = 0; i < nums.size(); i++) {
        // each element in nums = it's spot 
        umap[nums[i]] = i; 
    }

    int value = 0; 
    for(int j = 0; j < nums.size(); j++) {
        // value = target - each element in nums 
        value = target - nums[j];
        // if there exists value in umap AND value position != j postiion 
        // --> can not equal j postiion because that means it would be addint to itself
        if(umap[value] && umap[value] != j) {
            answer[0] = j; 
            answer[1] = umap[value];
        }
    }
    return answer; 
}

int main() {
    vector<int> myAnswer = {};
    vector<int> myNums = {2,5,5,11};
    int myTarget = 10; 

    myAnswer = twoSumImproved(myNums, myTarget);

    for (int k = 0; k < myAnswer.size(); k++) {
        cout << myAnswer[k] << endl;
    }
}