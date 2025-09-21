#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int size = 2 * x -1;

    for (int i = 0; i <= size; i++) {
        for (int j = 0; j <= size; j++) {
            if (i == 0 || i == size || j == size || j == 0) {
                cout << x;
            } else {
                cout << size-i;
            }
        }
        cout << endl;
    }
}