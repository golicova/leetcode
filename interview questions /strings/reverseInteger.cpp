#include <iostream>

using namespace std; 

int reverse(int x) {
    int answer = 0; 

    while(x != 0) {
        int remainder = x % 10; 
        answer = answer * 10 + remainder; 
        x /= 10; 
    }
    return answer; 
}

int main() {
    int x = -120; 

    cout << reverse(x); 

    return 0; 
}