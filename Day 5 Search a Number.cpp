#include <iostream>
#include <vector>
using namespace std;

int searchNumber(const vector<int>& arr, int k) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == k) {
            return i + 1; // 1-based index
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {9, 7, 16, 16, 4};
    int k = 16;
    cout << "Position of " << k << ": " << searchNumber(arr, k) << endl;
    return 0;
}
