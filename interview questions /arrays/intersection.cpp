#include <iostream>
#include <vector> 
#include <algorithm> 
#include <iterator> 

using namespace std; 

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> answer; 
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    set_intersection(nums1.begin(), nums1.end(), 
                     nums2.begin(), nums2.end(), back_inserter(answer));
    return answer; 
}     

int main() {
    // input: nums1 = [1,2,2,1], nums2 = [2,2]
    // output: [2,2]

    // 1 1 2 2 
    // 2 2 
    vector<int> vect1 {1,2,2,1};
    vector<int> vect2 {2,2};
    vector<int> intersectAnswer; 
    intersectAnswer = intersect(vect1, vect2);

    for (int i = 0; i < intersectAnswer.size(); i++) {
        cout << intersectAnswer[i] << endl; 
    }

    // input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
    // output: [4,9]
    vector<int> vect3 {4,9,5};
    vector<int> vect4 {9,4,9,8,4};
    vector<int> intersectAnswer2; 
    intersectAnswer2 = intersect(vect3, vect4);

    for (int i = 0; i < intersectAnswer2.size(); i++) {
        cout << intersectAnswer2[i] << endl; 
    }

    return 0;
}