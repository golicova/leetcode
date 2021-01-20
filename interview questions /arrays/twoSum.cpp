#include <iostream> 
#include <vector> 
#include <unordered_map> 

using namespace std; 

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> answer; 
    unordered_map<int, int> umap; 

    for(int i = 0; i < nums.size(); i++) {
        umap[nums[i]] = i; 
    }

    int value = 0; 
    for (int j = 0; j < nums.size(); j++) {
        value = target - nums[j];   
        if(umap.find(value) != umap.end()) {
            unordered_map<int, int> :: iterator it = umap.find(value); 
            if(it->second > j) {
                answer.push_back(j); 
                answer.push_back(it->second);
                return answer; 
            }
        }
    }
    return answer; 
}

int main() {

    return 0; 
}