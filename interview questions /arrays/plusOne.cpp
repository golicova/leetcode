#include <iostream> 
#include <vector> 

using namespace std; 

vector<int> plusOne(vector<int>& digits) {
    int size = digits.size(); 
    int carry = 1; 
    // 9 9 
    // 0 1

    while(size > 0) {
        if ((digits.at(size-1) + carry) < 10) {
            digits[size-1] = digits.at(size-1) + carry; 
            carry = 0; 
            size--; 
        }

        else {
            digits.at(size-1) = 0; 
            carry = 1;
            size--;  
        }

        if(size == 0 && carry == 1) {
            digits.insert(digits.begin(), 1); 
        }
    }
    return digits; 
}


int main() {
    vector<int> test {1, 2, 3};
    vector<int> test2 {4, 3, 2, 1}; 
    vector<int> test3 {9, 9};

    vector<int> answer; 
    answer = plusOne(test);

    cout << "first vector: " << endl; 
    for (int i : test) {
        cout << i << endl; 
    }

    vector<int> answer2; 
    answer2 = plusOne(test2);

    cout << "second vector: " << endl; 
    for (int i : test2) {
        cout << i << endl; 
    }

    vector<int> answer3; 
    answer3 = plusOne(test3);

    cout << "third vector: " << endl; 
    for (int i : test3) {
        cout << i << endl; 
    }

    return 0; 
}