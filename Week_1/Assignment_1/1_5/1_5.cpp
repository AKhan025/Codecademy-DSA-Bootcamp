#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = x; i > 0; i--) {
        int stars = (2*i);
        int spaces = (x-i+1);

        for (int j = 1; j < spaces; j++) {
            cout << " ";
        }

        for (int j = 1; j < stars; j++) {
            cout << "*";
        }

        cout << endl;
    }
}
