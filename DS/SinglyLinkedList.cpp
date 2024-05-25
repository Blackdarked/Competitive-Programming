#include<iostream>

using namespace std;

class Node {
public:
    int val;
    Node* next = nullptr;

    Node(int v) : val{ v } {}
};

class LinkedList {
public:
    Node* head = nullptr;
    Node* tail = nullptr;

    LinkedList() : head{ -1 }, tail{ head } {}

    void insertFront(LinkedList &L, Node* n) {
        if (L.head == nullptr) {
            L.head = n
            L.tail = L.head;
        }
        else {
            n->next = L.head;
            L.head = n;
        }
    }

    void insertAt(LinkedList &L, Node* n, Node* m) {
        if (m != nullptr) {
            n->next = m->next;
            m->next = n;
            if (m = L.tail) L.tail = m;
        }
        else insertFront(L, m);
    }

    void insertBack(LinkedList &L, Node* n) {
        if (L.head == nullptr) {
            L.head = n;
            L.tail = L.head;
        }
        else {
            L.tail->next = n;
            L.tail = n;
        }
    }
};