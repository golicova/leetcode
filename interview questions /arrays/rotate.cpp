#include <iostream> 
#include <vector> 
#include <algorithm> 

using namespace std; 

void rotateArray (vector<int> &nums, int k) {
    
    if (nums.empty()) return;

    k %= nums.size();
    
    if (k == 0) return;
    
    // [7,6,5,4,3,2,1]
    // reverse the whole thing 
    reverse(begin(nums), end(nums));
    // [5,6,7,4,3,2,1]
    // reverse before k 
    reverse(begin(nums), begin(nums) + k);
    // [5,6,7,1,2,3,4]
    // reverse after k 
    reverse(begin(nums) + k, end(nums));
}

int main() {
    // test case 1 
    vector<int> numbers {1,2,3,4,5,6,7};


    cout << "[";
    for (int i = 0; i < numbers.size(); i++) {
        if (i == numbers.size() - 1) {
            cout << numbers[i] << "]" << endl;
        }
        else cout << numbers[i] << ",";
    }

    /*    
    rotateArray(numbers, 3);

    cout << "array after rotation: " << endl;
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << endl;
    }
    */

    /*
    // test case 2
    vector <int> numbers; 
    numbers.push_back(-1);
    numbers.push_back(-100);
    numbers.push_back(3);
    numbers.push_back(99);

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << endl;
    }
    
    rotateArray(numbers, 2);

    cout << "array after rotation: " << endl;
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << endl;
    }
    */

    return 0; 
}