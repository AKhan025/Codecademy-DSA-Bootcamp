#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);
    int largest = 0;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > largest) {
            largest = x;
        }
    }

    cout << largest;

}