#include<iostream>
#include<stack>
#include<queue>
#include<algorithm>

using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

struct Tree {
    int val;
    Tree* left = nullptr;
    Tree* right = nullptr;

    Tree(int val) : val{ val }, left{ nullptr }, right{ nullptr } {}
};

Tree* insert(Tree* root, int v) {
    if (!root) return new Tree(v);

    if (v > root->val) root->right = insert(root->right, v);
    else if (v < root->val) root->left = insert(root->left, v);
    return root;
}

Tree* minVal(Tree* root) {
    Tree* cur = root;
    while (cur and cur->left) cur = cur->left;
    return cur;
}

Tree* maxVal(Tree* root) {
    Tree* cur = root;
    while (cur and cur->right) cur = cur->right;
    return cur;
}

Tree* remove(Tree* root, int v) {
    if (!root) return new Tree(v);

    if (v > root->val) root->right = remove(root->right, v);
    else if (v < root->val) root->left = remove(root->left, v);
    else {
        if (!root->left) return root->right;
        else if (!root->right) return root->left;
        else {
            Tree* minNode = minVal(root->right);
            root->val = minNode->val;
            root->right = remove(root->right, minNode->val);
        }
    }
    return root;
}

void process(Tree* n) {
    cout << n->val << ' ';
}

void preorder(Tree* root) {
    //Recursive
    if (root == nullptr) return;
    cout << root->val << ' ';
    preorder(root->left);
    preorder(root->right);

    //Iterative
    if (root == nullptr) return;
    stack<Tree*> st;
    st.push(root);
    while (!st.empty()) {
        Tree* n = st.top(); st.pop();
        process(n);
        // Note we push the right child first, because stack is LIFO - want to traverse the left subtree first.
        if (n->right) st.push(n->right);
        if (n->left) st.push(n->left);
    }
}

void inorder(Tree* root) {
    //Recursive
    if (root = nullptr) return;
    inorder(root->left);
    process(root);
    inorder(root->right);

    //Iterative
    stack<Tree*> st;
    Tree* n = root;

    while (n != nullptr and !s.empty()) {
        while (n != nullptr) {
            st.push(n);
            n = n->left;
        }
        n = st.top(); st.pop();
        process(n);
        n = n->right;
    }
}

void postorder(Tree* root) {
    //Recursive
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    process(root);

    //Iterative
    if (root == nullptr) return;

    stack<Tree*> st1;
    stack<Tree*> st2;
    st1.push(root);
    Tree* n;

    while (!st1.empty()) {
        n = st1.top(); st1.pop();
        st2.push(n);

        if (n->left != nullptr) st1.push(n->left);
        if (n->right != nullptr) st1.push(n->right);
    }

    while (!st2.empty()) {
        n = st2.top(); st2.pop();
        process(n);
    }
}

int32_t main() {
    FAST return 0;
}