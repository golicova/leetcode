//c++ -std=c++11 maxArea.cpp

#include <iostream> 
#include <vector> 
#include <algorithm>

using namespace std; 
    
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