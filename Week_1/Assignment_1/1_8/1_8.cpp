#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = 1; i <= x; i++) {
        int spaces = 2*(x-i);
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
}