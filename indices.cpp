#include <iostream>
#include <vector>
using namespace std;

vector<int> findAllIndices(const vector<int>& arr, int key) {
    vector<int> indices;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

void printVector(const vector<int>& v) {
    if (v.empty()) {
        cout << "[]";
        return;
    }
    cout << "[";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) cout << ", ";
    }
    cout << "]";
}

int main() {
    vector<int> arr1 = {1, 2, 3, 2, 4, 2, 5};
    cout << "Test Case 1 (Multiple occurrences): ";
    printVector(findAllIndices(arr1, 2));
    cout << endl;

    vector<int> arr2 = {10, 20, 30, 40};
    cout << "Test Case 2 (Key not present): ";
    printVector(findAllIndices(arr2, 50));
    cout << endl;

    vector<int> arr3 = {};
    cout << "Test Case 3 (Empty array): ";
    printVector(findAllIndices(arr3, 1));
    cout << endl;

    return 0;
}
