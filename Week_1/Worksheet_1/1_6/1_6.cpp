#include <iostream>
#include <vector>

using namespace std;

vector<int> calculateDiagonal(vector<vector<int>> &array, int n) {
    vector<int> ans;
    int sum = 0;
    int num = 0;
    for (auto i: array) {
        for (auto j: i) {
            if (num < n) {
                sum += array[num][num];
                //cout << array[num][num] << endl;
                //cout << sum << endl;
                num += 1;
            }
        }
        //cout << sum;
    }
    ans.push_back(sum);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    
    vector<vector<int>> array(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> array[i][j];
        }
    }

    vector<int> ans = calculateDiagonal(array, n);

    for (auto i: ans) {
        cout << i << endl;
    }


}