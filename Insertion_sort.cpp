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
    int n = A.size();
    for (int i = 0; i < n; i++) {
        int temp = A[i];
        int j = i;

        while (temp < A[j - 1] && j > 0) {
            A[j] = A[j - 1];
            j = j - 1;
        }
        A[j] = temp;
    }

    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }
}
