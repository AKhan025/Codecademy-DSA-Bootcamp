#include <iostream>
#include <vector>

using namespace std;

vector<int> reverseArray(vector<int> &array) {
    vector<int> ans;
    for (int i = array.size() - 1; i >= 0; i--) {
        ans.push_back(array[i]);
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

    vector<int> ans = reverseArray(array);

    for (auto i: ans) {
        cout << i << " ";
    }
}