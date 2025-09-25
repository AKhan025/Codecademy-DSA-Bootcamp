#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int countVowels(string &s) {
    int count = 0;
    for (auto i: s) {
        char c = tolower(i);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    return count;
}

int main()
{
    string s;

    getline(cin, s);

    int ans = countVowels(s);

    cout << ans;
}