#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *left, *right;
    Node(int x){
        val = x;
        left = right = nullptr;
    } 
};

int inorder(Node* root, int &k) {
    if (!root) return -1;

    int left = inorder(root->left, k);
    if (left != -1) return left;

    k--;
    if (k == 0) return root->val;

    return inorder(root->right, k);
}

int kthSmallest(Node* root, int k) {
    return inorder(root, k);
}

int main() {
    Node* root = new Node(3);
    root->left = new Node(1);
    root->right = new Node(4);
    root->left->right = new Node(2);

    int k = 1;
    cout << kthSmallest(root, k) << endl;

    return 0;
}
