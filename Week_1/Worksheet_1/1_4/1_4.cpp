#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int x;
    vector<int> array(n);

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > 0) {
            sum += 1;
        }
    }

    cout << sum << endl;



}