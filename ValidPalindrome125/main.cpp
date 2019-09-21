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
        char temp1 = tolower(s[i]), temp2 = tolower(s[j]);
        //If either of them are spaces, then skip that index
        if(temp1 == ' '){
            i++;
            continue;
        }
        if(temp2 == ' '){
            j--;
            continue;
        }
        //use the ascii table to only consider alphanumeric values
        if(int(temp1) < 48 || int(temp1) > 57 && int(temp1) < 97 || int(temp1) > 122){
            i++;
            continue;
        }
        if(int(temp2) < 48 || int(temp2) > 57 && int(temp2) < 97 || int(temp2) > 122){
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
