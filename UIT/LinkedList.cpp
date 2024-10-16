#include<iostream>
using namespace std;

struct Data {
    int v;
};

struct Node {
    Data d_;
    Node* next = nullptr;

    Node(Data d) : d_(d), next(nullptr) {}
};

struct List {
    Node* head;
    Node* tail;
};

Node* createNode(Data d) {
    Node* n = new Node(d);
    return n;
}

void createList(List& l) {
    l.head = nullptr;
    l.tail = nullptr;
}

void addHead(List& l, Node* n) {
    if (l.head == nullptr) {
        l.head = n;
        l.tail = l.head;
    }
    else {
        n->next = l.head;
        l.head = n;
    }
}

void addTail(List& l, Node* n) {
    if (l.head == nullptr) {
        l.head = n;
        l.tail = l.head;
    }
    else {
        l.tail->next = n;
        l.tail = n;
    }
}

void addAfterM(List& l, Node* n, Node* m) {
    if (m == nullptr) addHead(l, m);
    else {
        n->next = m->next;
        m->next = n;
        if (l.tail == m) l.tail = n;
    }
}

int removeHead(List& l, int& x) {
    Node* n;
    if (l.head == nullptr) {
        n = l.head;
        x = n->d_.v;
        l.head = l.head->next;
        delete n;
        if (l.head == nullptr) l.tail = nullptr;
        return 1;
    }
    return 0;
}

int removeAfterM(List& l, Node* n, int& x) {
    Node* m;
    if (n != nullptr) {
        m = n->next;
        if (m != nullptr and m == l.tail) {
            l.tail = n;
            n->next = m->next;
            x = m->d_.v;
            delete n;
        }
        return 1;
    }
    return 0;
}

int removeX(List& l, int x) {
    Node* n = l.head, * m = nullptr;
    while (n != l.tail and n->d_.v == x) {
        m = n;
        n = n->next;
    }
    if (n == nullptr) return 0;
    if (m != nullptr) removeAfterM(l, n, x);
    else removeHead(l, x);
    return 1;
}

Node* search(List l, Data d) {
    Node* n = l.head;
    while (n != nullptr and n->d_.v != d.v) n = n->next;
    return n;
}

int main() {

    return 0;
}