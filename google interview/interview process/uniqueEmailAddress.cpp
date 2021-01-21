#include <iostream>
#include <vector>
#include "hash_set"

using namespace std;

int numUniqueEmails(vector<string>& emails) {
    // alice.z@leetcode.com == alicez@leetcode.com
    // everything after + in name is ignored 
    // m.y+name@leetcode.come == my@leetcode.com 

    // test input: ["test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"]
    // test ouput:  2
    // test explanation: "testemail@leetcode.com" and "testemail@lee.tcode.com" actually receive mails

    // using a hashset, return a hashset size 
    
}

int main() {


}
