//c++ -std=c++11 maxArea.cpp

#include <iostream> 
#include <vector> 
#include <algorithm>

using namespace std; 

/*
    assignment: 
        given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). 
        n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). 
        find two lines, which, together with the x-axis forms a container, such that the container contains the most water.
    
    my thought process: 
        using the two pointer approach, set first pointer to the first height, and second pointer to the last height. 
        compute the area (remember to use the lower height) and update it as you go. 

    time complexity: O(n).
*/

int maxArea(vector<int>& height) {
    int maxArea = 0;
    int area = 0; 
    int aPointer = 0; 
    int bPointer = height.size() - 1; 

    while(aPointer < bPointer) {
        if(height[aPointer] < height[bPointer]) {
            area = height[aPointer] * (bPointer - aPointer);
            maxArea = max(maxArea, area);
            aPointer++; 
        } else {
            area = height[bPointer] * (bPointer - aPointer);
            maxArea = max(maxArea, area);
            bPointer--; 
        }
    }
    return maxArea; 
}

int main() {
    vector<int> test = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(test);
}