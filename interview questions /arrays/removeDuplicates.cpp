#include <iostream> 
#include <vector> 

using namespace std; 

int removeDuplicates(vector<int>& nums) {
        // return if array is empty or contains a single element 
        if(nums.size() == 0) return 0; 
        
        int i = 0; 
        // triverse elements in the array 
        for(int j = 1; j < nums.size(); j++) {
            // if the current element does not equal next element, 
            // store the current element
            if(nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
            }
        }
    return i + 1; 
}

int main() 
{
    vector<int> numbers; 
    numbers.push_back(0);
    numbers.push_back(0);
    numbers.push_back(1);
    numbers.push_back(1);
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(3);
    numbers.push_back(4);

    vector<int> numbers2;
    numbers2.push_back(55);
    numbers2.push_back(55);
    numbers2.push_back(55);
    numbers2.push_back(55);

    // contens of numbers2 are inside numbers
    numbers[1] = numbers2[1];
    cout << "numbers:" << numbers[1] << endl;
    cout << "numbers2:" <<numbers2[1] << endl; 

    cout << removeDuplicates(numbers) << endl;
    cout << numbers.size() << endl; 

    return 0;    
}

