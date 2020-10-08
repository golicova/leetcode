#include <iostream> 
#include <vector> 

using namespace std;
     
void moveZeroes(vector<int>& nums) {
    int countZeros = 0;   

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 0) {
            nums.erase(nums.begin() + i);
            i--; 
            countZeros++; 
        }
    }

    for(int j = 0; j < countZeros; j++) {
        nums.push_back(0);
    }
}

int main() {
    // output: {1, 3, 12, 0, 0}
    vector<int> vect1 {0, 1, 0, 3, 12};
    moveZeroes(vect1);

    cout << "first vector: " << endl; 
    for (int i : vect1) {
        cout << i << endl; 
    }

    // test 2
    vector<int> vect2 {1};
    moveZeroes(vect2);

    cout << "second vector: " << endl; 
    for (int i : vect2) {
        cout << i << endl; 
    }

    // test 3
    vector<int> vect3 {1, 0, 0, 1};
    moveZeroes(vect3);

    cout << "third vector: " << endl; 
    for (int i : vect3) {
        cout << i << endl; 
    }


    return 0; 
}