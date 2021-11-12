#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &A, int val, int i, int j) {
    if (i > j) {
        return -1;
    }
    int mid = (i + j) / 2;

    if (A[mid] == val) {
        return mid;
    }
    if (val > A[mid]) {
        binarySearch(A, val, mid + 1, j);
    } else {
        binarySearch(A, val, i, mid - 1);
    }
    return 0;
}

int main() {
    vector<int> A = {};
    int numberOfElemets, element;
    cout << "Enter the number of elements" << endl;
    cin >> numberOfElemets;
    for (int i = 1; i <= numberOfElemets; i++) {
        int element;
        cout << "Enter elements " << i << ": ";
        cin >> element;
        A.push_back(element);
    }

    cout << "Enter the number you want to search: ";
    cin >> element;
    cout << endl;
    int ans = binarySearch(A, element, 0, A.size() - 1);
    cout << element;
    if (ans == -1) {
        cout << "The number is not found" << endl;
    } else {
        cout << "The number " << A[ans] << " is at position : " << ans << endl;
    }
} 