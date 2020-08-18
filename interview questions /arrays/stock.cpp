#include <iostream> 
#include <vector> 

using namespace std; 

int maxProfit (vector<int>& prices) {
    // edge case 
    if(prices.size() == 0) return 0; 

    // keep track of how much money was made 
    int profit = 0; 

    for (int i = 0; i < prices.size(); i++) {
        // compare prices that are next to each other 
        // if price is bigger on the next day, profit can be made 
        if (prices[i + 1] > prices[i]) {
            // calculate profit 
            profit = profit + (prices[i + 1] - prices[i]);
        }
    }
    return profit; 
}

int main()
{
    // example 1
    vector<int> test; 
    test.push_back(7);
    test.push_back(1);
    test.push_back(5);
    test.push_back(3);
    test.push_back(6);
    test.push_back(4);

    cout << maxProfit(test) << endl;
        
    // example 2
    vector<int> test2; 
    test2.push_back(1);
    test2.push_back(2);
    test2.push_back(3);
    test2.push_back(4);
    test2.push_back(5);

    cout << maxProfit(test2) << endl;

    // example 3
    vector<int> test3; 
    test3.push_back(7);
    test3.push_back(6);
    test3.push_back(4);
    test3.push_back(3);
    test3.push_back(1);

    cout << maxProfit(test3) << endl; 
}