#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the BST
Node* insert(Node* root, int value) {
    if (root == nullptr)
        return createNode(value);
    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    return root;
}

// Inorder Traversal (Left, Root, Right)
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Preorder Traversal (Root, Left, Right)
void preorder(Node* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder Traversal (Left, Right, Root)
void postorder(Node* root) {
    if (root != nullptr) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    Node* root = nullptr;
    int choice, n, value;

    while (true) {
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cin >> value;
                    root = insert(root, value);
                }
                break;
            case 2:
                cout << "Inorder: ";
                inorder(root);
                cout << endl;
                break;
            case 3:
                cout << "Preorder: ";
                preorder(root);
                cout << endl;
                break;
            case 4:
                cout << "Postorder: ";
                postorder(root);
                cout << endl;
                break;
            case 5:
                return 0;
        }
    }
}
