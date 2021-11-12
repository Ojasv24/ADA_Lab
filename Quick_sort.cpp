#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &A, int start, int end) {
    int i = start + 1;
    int piv = A[start];
    for (int j = start + 1; j <= end; j++) {
        if (A[j] < piv) {
            swap(A[i], A[j]);
            i += 1;
        }
    }
    swap(A[start], A[i - 1]);
    return i - 1;
}

void quick_sort(vector<int> &A, int start, int end) {
    if (start < end) {
        int piv_pos = partition(A, start, end);
        quick_sort(A, start, piv_pos - 1);
        quick_sort(A, piv_pos + 1, end);
    }
}

int main() {
    int numberOfElemets;
    cout << "Enter the number of elements" << endl;
    cin >> numberOfElemets;
    for (int i = 1; i <= numberOfElemets; i++) {
        int element;
        cout << "Enter elements " << i << ": ";
        cin >> element;
        A.push_back(element);
    }
    quick_sort(A, 0, A.size() - 1);
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }
}