//c++ -std=c++11 intToRoman.cpp
#include <iostream> 

using namespace std; 

/*
    assignment: 
        given an integer, convert it to a roman numeral.
        I can be placed before V (5) and X (10) to make 4 and 9. 
        X can be placed before L (50) and C (100) to make 40 and 90. 
        C can be placed before D (500) and M (1000) to make 400 and 900.

        1 <= num <= 3999

        Symbol       Value
        I            1
        V            5
        X            10
        L            50
        C            100
        D            500
        M            1000
        
    time complexity: 
*/

string intToRoman(int num) {
    string roman; 
    int piece; 

    // 1994 
    if(num >= 1000) {
        // this return the number in thousands (in this case, 1)
        piece = num / 1000; 

        // adding as many Ms as there are thousands 
        for(int i = 0; i < piece; i++) {
            roman += 'M';
        }
        // gives remainder in hundreds 
        // 1994 % 1000 = 994 
        num %= 1000; 
    }

    if(num >= 100) {
        piece = num / 100; 
        
        if(piece == 9) {
            roman += "CM";
        } else if (piece >= 5) {
            roman += 'D';

            for(int j = 0; j < piece - 5; j++) {
                roman += 'C';
            }
        } else if (piece == 4) {
            roman += "CD";
        } else if (piece >= 1) {
            for(int k = 0; k < piece; k++) {
                roman += 'C';
            }
        }
        num %= 100; 
    }

    if(num >= 10) {
        piece = num / 10; 

        if(piece == 9) {
            roman += "XC";
        } else if (piece >= 5) {
            roman += 'L';

            for(int i = 0; i < piece - 5; i++) {
                roman += 'X';
            }
        } else if (piece == 4) {
            roman += "XL";
        } else if (piece >= 1) {
            for(int j = 0; j < piece; j++) {
                roman += 'X';
            }
        }
        num %= 10; 
    }

    if(num >= 1) {
        piece = num; 

        if(piece == 9) {
            roman += "IX";
        } else if(piece >= 5) {
            roman += "V";

            for(int i = 0; i < piece - 5; i++) {
                roman += 'I';
            }
        } else if(piece == 4) {
            roman += "IV";
        } else if(piece >= 1) {
            for(int j = 0; j < piece; j++) {
                roman += 'I';
            }
        }
    }
    return roman; 
}

int main() {

}