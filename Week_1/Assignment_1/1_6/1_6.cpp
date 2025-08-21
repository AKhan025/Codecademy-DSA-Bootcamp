#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = 1; i <= 2 * x; i++) {
        if (i <= x) {
            int stars = (2*i-1);
            int spaces = (x-i-1);

            for (int j = 0; j <= spaces; j++) {
                cout << " ";
            }

            for (int j = 0; j < stars; j++) {
                cout << "*";
            }
        } else if (i > x) {
            int stars = (2 * (2*x - i)+1);
            int spaces = (i - x-1);

            //cout << spaces;
            for (int j = 0; j < spaces; j++) {
                cout << " ";
            }

            for (int j = 0; j < stars; j++) {
                cout << "*";
            }

            for (int j = 0; j < spaces; j++) {
                cout << " ";
            }
            }
        cout << endl;
    }
}
