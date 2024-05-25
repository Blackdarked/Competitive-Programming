
#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    Node* insert(Node* root, int data) {
        if (root == NULL) {
            return new Node(data);
        }
        else {
            Node* cur;
            if (data <= root->data) {
                cur = insert(root->left, data);
                root->left = cur;
            }
            else {
                cur = insert(root->right, data);
                root->right = cur;
            }

            return root;
        }
    }
    /*The tree node has data, left child and right child
    class Node {
        int data;
        Node* left;
        Node* right;
    };

    */
    int height(Node* root) {// BFS
        int h = 0;
        auto bfs = [](Node* root, int hgt) {
            queue<Node*>q;
            if (root) q.push(root);

            while (q.size() > 0) {
                int l = q.size();
                for (int i = 0; i < l; i++) {
                    Node* cur = q.front();
                    q.pop();
                    if (cur->left) q.push(cur->left);
                    if (cur->right) q.push(cur->right);
                }
                hgt++;
            }
            };
        bfs(root, h);
        return h;
    }

}; //End of Solution

int main() {

    Solution myTree;
    Node* root = NULL;

    int t;
    int data;

    std::cin >> t;

    while (t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }

    int height = myTree.height(root);

    std::cout << height;

    return 0;
}



