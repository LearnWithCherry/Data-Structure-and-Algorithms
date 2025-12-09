#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int value){
        data = value;
        left = right = NULL;
    }
};
void inOrderTraversal(Node* root){
    if(root == NULL) return; 
    inOrderTraversal(root->left);
    cout << root -> data << " ";
    inOrderTraversal(root->right);
}
void preOrderTraversal(Node* root){
    if(root == NULL)return;
    cout << root -> data << " ";
    preOrderTraversal(root -> left);
    preOrderTraversal(root -> right);
}
void postOrderTraversal(Node* root){
    if(root == NULL)return;
    postOrderTraversal(root -> left);
    postOrderTraversal(root -> right);
    cout << root -> data << " ";
}

int main() {
    Node* root = new Node(10);
    root -> left = new Node(20);
    root -> right = new Node(30);
    root -> left -> left = new Node(40);
    root -> right -> right = new Node(50);
    root -> left -> left -> left = new Node(60);
    root -> right -> right -> right = new Node(70);

    cout << "Inorder Traversal: ";
    inOrderTraversal(root);
    cout << "\npreorder Traversal: ";
    preOrderTraversal(root);
    cout << "\npostorder Traversal: ";
    postOrderTraversal(root);
    return 0;
}
 