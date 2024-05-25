#include<iostream>
#include<queue>
#include<stack>
#include<algorithm>

using namespace std;

struct Tree {
    int val;
    Tree* l = nullptr;
    Tree* r = nullptr;

    Tree(int v) : val{ v }, l{ nullptr }, r{ nullptr } {}
};

Tree* insert(Tree* root, int v) {
    if (!root) return new Tree(v);

    if (root->val < v) root->r = insert(root->r, v);
    else if (root->val > v) root->l = insert(root->l, v);

    return root;
}

Tree* minVal(Tree* root) {
    Tree* n = root;
    while (n and n->l) n = n->l;
    return n;
}

Tree* maxVal(Tree* root) {
    Tree* n = root;
    while (n and n->r) n = n->r;
    return n;
}

Tree* remove(Tree* root, int v) {
    if (!root) return new Tree(v);

    if (root->val < v) root->r = remove(root->r, v);
    else if (root->val > v) root->l = remove(root->l, v);
    else {
        if (!root->r) return root->l;
        else if (!root->l) return root->r;
        else {
            Tree* minNode = minVal(root);
            root->val = minNode->val;
            root->r = remove(root->r, minNode->val);
        }
    }
    return root;
}

void process(Tree* n) { cout << n->val << ' '; }

void preorder(Tree* root) { //Iterative DFS
    if (root == nullptr) return;

    stack<Tree*> s;
    s.push(root);

    while (!s.empty()) {
        Tree* n = s.top(); s.pop();
        process(n);
        if (n->r) s.push(n->r);
        if (n->l) s.push(n->l);
    }
}

void inorder(Tree* root) { //Iterative DFS
    stack<Tree*> s;
    Tree* n = root;

    while (n != nullptr and !s.empty()) {
        while (n != nullptr) {
            s.push(n);
            n = n->l;
        }
        n = s.top(); s.pop();
        process(n);
        n = n->r;
    }
}

void postorder(Tree* root) { //Iterative DFS
    if (root == nullptr) return;

    stack<Tree*> s1, s2;
    s1.push(root);
    Tree* n;

    while (!s1.empty()) {
        n = s1.top(); s1.pop();
        s2.push(n);
        if (n->l) s1.push(n->l);
        if (n->r) s1.push(n->r);
    }

    while (!s2.empty()) {
        n = s2.top(); s2.pop();
        process(n);
    }
}

void levelorder(Tree* root) { //BFS
    queue<Tree*> q;
    if (root) q.push(root);

    while (!q.empty()) {
        Tree* n = q.front(); q.pop();
        process(n);

        if (n->l) q.push(n->l);
        if (n->r) q.push(n->r);
    }
}

int main() {

    return 0;
}