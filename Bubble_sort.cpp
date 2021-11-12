#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A = {};
    int temp, numberOfElemets;
    cout << "Enter the number of elements" << endl;
    cin >> numberOfElemets;

    for (int i = 1; i <= numberOfElemets; i++) {
        int element;
        cout << "Enter elements " << i << ": ";
        cin >> element;
        A.push_back(element);
    }

    for (int k = 0; k < A.size() - 1; k++) {
        for (int i = 0; i < A.size() - k - 1; i++) {
            if (A[i] > A[i + 1]) {
                temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }
}