#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
        if (i % 2 == 0) {
            sum += array[i];
        }
    }

    cout << sum;

}