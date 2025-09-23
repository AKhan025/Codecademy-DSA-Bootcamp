#include <iostream>
#include <vector>

using namespace std;

int findTarget(vector<int> &array, int t) {
    int ans = 0;
    for (auto& i: array) {
        if (i == t) {
            ans += 1;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    
    vector<int> array(n);

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int t;
    cin >> t;

    int ans = findTarget(array, t);
    cout << ans << endl;
}