#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> replaceTarget(vector<vector<int>> &array, int &t, int r) {
    vector<vector<int>> ans;

    for (auto i: array) {
        vector<int> temp;
        for (auto j: i) {
            if (j == t) {
                temp.push_back(r);
            } else {
                temp.push_back(j);
            }
        }
        ans.push_back(temp);
    }

    return ans;
}

int main()
{
    int r, c, t, r2;
    cin >> r;
    cin >> c;
    
    vector<vector<int>> array(r, vector<int> (c));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> array[i][j];
        }
    }

    cin >> t;
    cin >> r2;

    vector<vector<int>> ans = replaceTarget(array, t, r2);

    for (auto i: ans) {
        for (auto j: i) {
            cout << j << " ";
        }
        cout << endl;
    }

}