#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string reverseString(string &s, string revString){
    for (int i = s.size() - 1; i >= 0; i--) {
        revString += s[i];
    }

    return revString;
}

string isPalindrome(string &s, string revString) {
    revString = reverseString(s, revString);
    bool isPalindrome = false;
    for (int i = 0; i <= s.size() - 1; i++) {
        if (s[i] == revString[i]) {
            isPalindrome = true;
        } else {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main()
{
    string s, revString;
    cin >> s;
    
    isPalindrome(s, revString);

}