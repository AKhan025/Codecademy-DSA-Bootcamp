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
            int stars = i;
            int spaces = (2*(x-i)+1);

            for (int j = 1; j <= stars; j++) {
                cout << "*";
            }

            for (int j = 1; j < spaces; j++) {
                cout << " ";
            }

            for (int j = 1; j <= stars; j++) {
                cout << "*";
            }
        } else if (i > x) {
            int stars = ((2*x - i)+1);
            int spaces = (2*(i - x-1));
            //int stars = (i - x-1);
            //int spaces = (2*(i-1));

            for (int j = 0; j < stars; j++) {
                cout << "*";
            }

            for (int j = 0; j < spaces; j++) {
                cout << " ";
            }

            for (int j = 0; j < stars; j++) {
                cout << "*";
            }
            
            }
        cout << endl;
    }
}