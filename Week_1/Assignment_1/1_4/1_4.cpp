#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = x; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}
