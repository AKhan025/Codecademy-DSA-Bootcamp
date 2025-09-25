#include <iostream>
#include <vector>

using namespace std;

vector<double> rowAverage(vector<vector<int>> &array) {
    vector<double> ans;

    for (auto i: array) {
        double sum = 0;
        for (auto j: i) {
            sum += j;
        }

        ans.push_back(sum / 3);
    }

    return ans;
}

int main()
{
    int r = 4;
    int c = 3;
    
    vector<vector<int>> array(r, vector<int> (c));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> array[i][j];
        }
    }

    vector<double> ans = rowAverage(array);

    for (auto i: ans) {
        cout << i << endl;
    }
}