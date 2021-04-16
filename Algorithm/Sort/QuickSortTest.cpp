#include <bits/stdc++.h>
using namespace std;

void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
}

int partition(int arr[], int l, int h) {
    int pivot = (l + h) / 2;
    int i = l - 1;
    for (int j = l; j <= h; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return i + 1;
}

void quickSort(int arr[], int l, int r) {
    if (l < r) {
        int pi = partition(arr, l, r);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int n, arr[n];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    quickSort(arr, 0, n);
    printArray(arr, n);
    return 0;
}