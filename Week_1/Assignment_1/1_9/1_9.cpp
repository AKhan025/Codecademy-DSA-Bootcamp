#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    cin >> x;

    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++) {
            cout << alphabet[x - i + j - 1];
        }
        cout << endl;
    }
}