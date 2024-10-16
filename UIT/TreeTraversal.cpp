#include<iostream>
#include<stack>

using namespace std;

struct Node {
    int d;
    Node* left = nullptr;
    Node* right = nullptr;

    Node(int d_) : d(d_) {}
};

void Inorder(Node* root) {
    if (!root) return;

    // Method 1
    Inorder(root->left);
    cout << root->d << ' ';
    Inorder(root->right);

    // Method 2
    stack<Node*> s;
    s.push(root);
    while (!s.empty()) {
        Node* cur = s.top(); s.pop();
        while (cur != nullptr) {
            s.push(cur);
            cur = cur->left;
        }
        cout << cur->d << ' ';
        cur = cur->right;
    }
}

void Preorder(Node* root) {
    if (!root) return;

    // Method 1
    cout << root->d << ' ';
    Preorder(root->left);
    Preorder(root->right);

    // Method 2
    stack<Node*> s;
    s.push(root);

    while (!s.empty()) {
        Node* cur = s.top(); s.pop();
        cout << cur->d << ' ';

        if (cur->right) s.push(cur->right);
        if (cur->left) s.push(cur->left);
    }
}


void Postorder(Node* root) {
    if (!root) return;

    // Method 1
    Postorder(root->left);
    Postorder(root->right);
    cout << root->d << ' ';

    // Method 2
    stack<Node*> s1, s2;
    s1.push(root);

    while (!s1.empty()) {
        Node* cur = s1.top(); s1.pop();
        s2.push(cur);

        if (cur->left) s1.push(cur->left);
        if (cur->right) s1.push(cur->right);
    }

    while (!s2.empty()) {
        Node* cur = s2.top(); s2.pop();
        cout << cur->d << ' ';
    }
}

int main() {

}