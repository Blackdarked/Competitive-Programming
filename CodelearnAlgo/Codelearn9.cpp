///Min num in two array 
#include <iostream>
using namespace std;

int a[100000], b[100000], c[100000];
int main() {
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int size = 0;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            c[size] = a[i];
            size++;
            i++;
        }
        else {
            c[size] = b[j];
            size++;
            j++;
        }
    }
    while (i < n) {
        c[size] = a[i];
        size++;
        i++;
    }
    while (j < m) {
        c[size] = b[j];
        size++;
        j++;
    }
    for (int i = 0; i < size; i++) {
        cout << c[i] << " ";
    }
    return 0;
}