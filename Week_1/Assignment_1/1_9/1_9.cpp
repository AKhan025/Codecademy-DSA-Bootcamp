#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x >= 1 && x <= 26) {
        string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for (int i = 1; i <= x; i++) {
            for (int j = 1; j <= i; j++) {
                cout << alphabet[x - i + j - 1];
            }
            cout << endl;
        }
    } else {
        cout << "Incorrect value, please enter a number between 1 and 26";
    }
}