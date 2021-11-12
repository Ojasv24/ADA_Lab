#include <bits/stdc++.h>

using namespace std;

void myMerge(vector<int> &A, int start, int mid, int end) {
    vector<int> l{};
    vector<int> r{};

    int n1 = mid - start + 1;
    int n2 = end - mid;

    for (int i = 0; i < n1; i++) {
        l.push_back(A[start + i]);
    }
    for (int j = 0; j < n2; j++) {
        r.push_back(A[mid + 1 + j]);
    }
    int i = 0, j = 0, k = start;

    while (i < n1 && j < n2) {
        if (l[i] <= r[j]) {
            A[k] = l[i];
            i++;
        } else {
            A[k] = r[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        A[k] = l[i];
        i++;
        k++;
    }
    while (j < n2) {
        A[k] = r[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &A, int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        mergeSort(A, start, mid);
        mergeSort(A, mid + 1, end);

        myMerge(A, start, mid, end);
    }
}

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
    mergeSort(A, 0, A.size() - 1);
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }
}