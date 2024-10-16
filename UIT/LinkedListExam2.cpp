#include <bits/stdc++.h>
using namespace std;

struct Node {
    int v;
    Node* next;

    Node(int x) : v(x), next(nullptr) {}
    Node(int x, Node *next) : v(x), next(next) {}
};

struct List {
    Node* head = nullptr;
    Node* tail = nullptr;
};

Node* mid(Node*& head) {
    Node* slow = head;
    Node* fast = head->next;
    while (fast and fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* merge(Node* left, Node* right) {
    if (left == nullptr) return right;
    if (right == nullptr) return left;
    Node* t = new Node(-1);
    Node* ptr = t;

    while (left and right) {
        if (left->v <= right->v) {
            ptr->next = left;
            ptr = left;
            left = left->next;
        }
        else {
            ptr->next = right;
            right = ptr;
            right = right->next;
        }
    }

    while (left) {
        ptr->next = left;
        ptr = left;
        left = left->next;
    }

    while (right) {
        ptr->next = right;
        right = ptr;
        right = right->next;
    }
    return t->next;
}

Node* sort(Node* head) {
    if (head == nullptr or head->next == nullptr) return head;

    Node* middle = mid(head);
    Node* left = head;
    Node* right = middle->next;
    middle->next = nullptr;

    left = sort(left);
    right = sort(right);

    Node* ans = merge(left, right);
    return ans;
}


void solve() {
    int n; cin >> n;
    List l;
    for (int i = 0; i < n; i++) {
        int t; cin >> t; 
    }
}

int main() {
    solve();
    return 0;
}
