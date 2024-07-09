#include <vector>
#include <iostream>
using namespace std;

vector<int> quicksort(const vector<int>& arr) {
    if (arr.size() < 2) {
        return arr;
    }

    int pivot = arr[0];
    vector<int> left,right;
    // Partitioning the arr
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] <= pivot) {
            left.push_back(arr[i]);
        } else {
            right.push_back(arr[i]);
        }
    }

    // Recursively sort and merge
    vector<int> sortleft = quicksort(left);
    vector<int> sortright = quicksort(right);

    // Combine the sorted arrs and the pivot
    sortleft.push_back(pivot);
    sortleft.insert(sortleft.end(), sortright.begin(), sortright.end());

    return sortleft;
}

int main() {
    vector<int> arr = {5, 4, 3, 6, 7, 9};
    vector<int> arr1 = quicksort(arr);

    for (int i : arr1) {
        cout << i << " ";
    }

    return 0;
}
