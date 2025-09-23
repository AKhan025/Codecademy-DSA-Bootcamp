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

bool isPalindrome(vector<int> &array, vector<int> &revArray) {
    bool isPalindrome = false;
    int arrN = 0;
    int revN = 0;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] == revArray[i]) {
            isPalindrome = true;
        } else if (array[i] != revArray[i]) {
            isPalindrome = false;
            break;
        }
    }

    return isPalindrome;
}

int main()
{
    int n;
    cin >> n;
    
    vector<int> array(n);

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    vector<int> revArray = reverseArray(array);

    bool ans = isPalindrome(array, revArray);

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}