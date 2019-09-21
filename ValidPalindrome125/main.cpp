//
//  main.cpp
//  ValidPalindrome125
//
//  Created by Aj Gill on 9/20/19.
//  Copyright © 2019 Aj Gill. All rights reserved.
//

#include <iostream>

using namespace std;

bool isPalindrome(string s) {
    int i = 0;
    int j = s.length()-1;
    while(i <= j){
        //convert all to lowercase if applicable since case doesnt matter
        char temp1 = s[i], temp2 = s[j];
        //If either of them are spaces, then skip that index
        if(temp1 == ' '){
            i++;
            continue;
        }
        else if(temp2 == ' '){
            j--;
            continue;
        }
        //Convert to lowercase using ASCII
        if(temp1 <= 'Z' && temp1 >= 'A'){
            temp1 += 32;
        }
        if(temp2 <= 'Z' && temp2 >= 'A'){
            temp2 += 32;
        }
        //use the ascii table to only consider alphanumeric values
        if(!isalnum(temp1)){
            i++;
            continue;
        }
        if(!isalnum(temp2)){
            j--;
            continue;
        }
        //If the two characters are not equivalent, then it is not a palindrome
        if(temp1 != temp2){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";
    bool palindromeStatus = isPalindrome(s);
    cout << "Is it a palindrome? " << (palindromeStatus ? "true" : "false") << "\n";
}
