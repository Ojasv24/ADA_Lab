#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A = {};
    int numberOfElemets;
    cout << "Enter the number of elements" << endl;
    cin >> numberOfElemets;
    for (int i = 1; i <= numberOfElemets; i++) {
        int element;
        cout << "Enter elements " << i << ": ";
        cin >> element;
        A.push_back(element);
    }

    int min;

    for (int i = 0; i < A.size() - 1; i++) {
        min = i;

        for (int j = i + 1; j < A.size(); j++) {
            if (A[min] > A[j]) {
                min = j;
            }
        }
        swap(A[i], A[min]);
    }

    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }
}