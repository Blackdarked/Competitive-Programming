#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    vi v = {1, 2, 3, 4, 5};
    cout << "Before partition: ";
    for_each(v.begin(), v.end(), [](int v) {
        cout << v << " ";
    });
    auto pred = [](int x) { return x % 2 == 0; };
    partition(v.begin(), v.end(), pred);
    cout << "\nAfter partition: ";
    for_each(v.begin(), v.end(), [](int v) {
        cout << v << " ";
    });
    cout << "\n";
    cout << "Is it partitioned? \n";
    if(is_partitioned(v.begin(), v.end(), pred))
        cout << "Yes, it is partitioned\n";
    else
        cout << "No, it isn't partitioned\n";
    return 0;
}