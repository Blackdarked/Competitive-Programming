#include<bits/stdc++.h>
using namespace std;

#define FAST cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);

struct D {
    float x, y, z;

    bool operator==(D d) {
        return (this->x == d.x and this->y == d.y and this->z == d.z);
    }

    bool operator<(D d) {
        return (this->x < d.x or (this->x == d.x and this->y < d.y) or (this->x == d.x and this->y == d.y and this->z < d.z));
    }

    bool operator>(D d) {
        return (this->x > d.x or (this->x == d.x and this->y > d.y) or (this->x == d.x and this->y == d.y and this->z > d.z));
    }

    bool operator<=(D d) {
        return (*this == d and *this < d);
    }
};

struct Node {
    D d;
    Node* next = nullptr;

    Node(D d_) : d(d_) {}
};

struct List {
    Node* head = nullptr;
    Node* tail = nullptr;
};

void addHead(List& l, Node* n) {
    if (l.head == l.tail) {
        l.head = n;
        l.tail = l.head;
    }
    else {
        n->next = l.head;
        l.head = n;
    }
}

void insert(List& l, Node* n) {
    if (l.head == nullptr) {
        l.head = n;
        l.tail = l.head;
    }

    else {
        l.tail->next = n;
        l.tail = n;
    }
}

void find(List& l, D d_) {
    Node* cur = l.head;
    int ans = 0;
    while (cur) {
        if (cur->d == d_) {
            cout << ans << '\n';
            return;
        }
        ++ans;
        cur = cur->next;
    }
    cout << "KHONG" << '\n';
}

void Sort(List& l) {
    if (l.head == l.tail) return;

    List a, b;
    Node* p;
    Node* x = l.head;
    l.head = x->next;
    while (l.head != nullptr) {
        p = l.head;
        l.head = p->next;
        p->next = nullptr;

        if (p->d < x->d) addHead(a, p);
        else addHead(b, p);

        Sort(a);
        Sort(b);

        if (a.head != nullptr) {
            l.head = a.head;
            a.head->next = x;
        }
        else l.head = x;

        x->next = b.head;
        if (b.head != nullptr) l.tail = b.tail;
        else l.tail = x;
    }
}

void solve() {
    int n; cin >> n;
    List l;
    for (int i = 0; i < n; i++) {
        D d; cin >> d.x >> d.y >> d.z;
        Node* n = new Node(d);
        insert(l, n);
    }

    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        D t; cin >> t.x >> t.y >> t.z;
        find(l, t);
    }

    int o; cin >> o;
    for (int i = 0; i < o; i++) {
        D t; cin >> t.x >> t.y >> t.z;
    }
    Sort(l);
    Node* c = l.head;
    while (c and c->next) {
        cout << c->d.x << ' ' << c->d.y << ' ' << c->d.z << '\n';
        c = c->next;
    }
}

int main() {
    FAST solve();
    return 0;
}