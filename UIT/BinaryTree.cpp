#include<bits/stdc++.h>
using namespace std;

#define FAST cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);

struct Node {
    int v_;
    Node* left = nullptr;
    Node* right = nullptr;

    Node(int v) : v_(v) {}
};

int getHeight(Node* root) {
    if (!root) return 0;
    return 1 + max(getHeight(root->left), getHeight(root->right));
}

int Search(vector<char> v, int Start, int End, int Val) {
    int i;
    for (i = Start; i <= End; i++) {
        if (v[i] == Val) return i;
    }
}

Node* BuildTree(vector<char> in, vector<char> pre, int inStart, int inEnd) {
    static int preId = 0;
    if (inStart > inEnd) return nullptr;

    Node* t = new Node(pre[preId++]);
    if (inStart == inEnd) return t;

    int inID = Search(in, inStart, inEnd, t->v_);
    t->left = BuildTree(in, pre, inStart, inID - 1);
    t->right = BuildTree(in, pre, inID + 1, inEnd);
    return t;
}

void InOrder(Node* root) {
    if (!root) return;

    InOrder(root->left);
    cout << root->v_ << '\n';
    InOrder(root->right);
}

void solve() {
    vector<char> pre, in;
    int t;

    while (cin >> t) {
        if (t == -1) break;
        pre.push_back(t);
    }

    while (cin >> t) {
        if (t == -1) break;
        in.push_back(t);
    }

    if (pre.empty() or in.empty()) {
        cout << "Empty Tree";
        return;
    }

    int n = in.size();
    Node* root = BuildTree(in, pre, 0, (n - 1));
    // InOrder(root);
    int ans = getHeight(root->left) - getHeight(root->right);
    cout << -1 * (ans > 0) + (ans < 0);
}

int main() {
    FAST
        solve();
    return 0;
}