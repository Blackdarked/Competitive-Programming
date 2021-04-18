#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

//Main Template
template <class ForwardIt>
void quickSort(ForwardIt first, ForwardIt last) {
    if (first == last)
        return;
    auto pivot = *next(first, distance(first, last) / 2);
    ForwardIt mid1 = partition(first, last, [pivot](const auto &em) { return em < pivot; });
    ForwardIt mid2 = partition(mid1, last, [pivot](const auto &em) { return !(pivot < em); });
    quickSort(first, mid1);
    quickSort(mid2, last);
}

//Driver Code
int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    vi v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Original vector:\n    ";
    for (int elem : v)
        cout << elem << ' ';

    auto it = partition(v.begin(), v.end(), [](int i) { return i % 2 == 0; });

    cout << "\nPartitioned vector:\n    ";
    copy(begin(v), it, ostream_iterator<int>(cout, " "));
    cout << " * "
                 " ";
    copy(it, end(v), ostream_iterator<int>(cout, " "));

    forward_list<int> fl = {1, 30, -4, 3, 5, -4, 1, 6, -8, 2, -5, 64, 1, 92};
    cout << "\nUnsorted list:\n    ";
    for (int n : fl)
        cout << n << ' ';
    cout << '\n';

    quickSort(begin(fl), end(fl));
    cout << "Sorted using quicksort:\n    ";
    for (int fi : fl)
        cout << fi << ' ';
    cout << '\n';
}