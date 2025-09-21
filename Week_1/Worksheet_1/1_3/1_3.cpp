#include <iostream>
#include <vector>

using namespace std;

vector<int> calculateRowSum(vector<vector<int>> &array) {
    vector<int> ans;
    for (auto i: array) {
        int sum = 0;
        for (auto j: i) {
            sum += j;
        }
        ans.push_back(sum);
    }
    return ans;
}

int main()
{
    int r, c;
    cin >> r >> c;
    int sum;
    int x;

    vector<vector<int>> array(r, vector<int>(c));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> array[i][j];
        }
    }

    vector<int> ans = calculateRowSum(array);

    for (int i: ans) {
        cout << i << " ";
    }
    cout << endl;
}