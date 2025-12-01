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
class binaryTreeTraversal{
    public:
        Node* root;
    binaryTreeTraversal(){
        root = NULL;
    }
    Node* createNode(int value){
        Node* newNode = new Node(value);
    }
    void preOrderTraversal(Node* Node){
        if(Node == NULL){
            return;
        }
        cout << Node->data << " ";
        preOrderTraversal(Node->left);
        preOrderTraversal(Node->right);
    }
    void InorderTraversal(Node* Node){
        if(Node == NULL){
            return;
        }
        InorderTraversal(Node->left);
        cout << Node->data << " ";
        InorderTraversal(Node->right);
    }
    void postorderTraversal(Node* Node){
        if(Node == NULL){
            return;
        }
        postorderTraversal(Node->left);                              
        postorderTraversal(Node->right);
        cout << Node->data << " ";
    }
};
int main() {
    binaryTreeTraversal tree;
    tree.root = tree.createNode(10);
    tree.root->left = tree.createNode(20);
    tree.root->right = tree.createNode(30);
    int n;
    cout <<"Enter choice: ";cin >>n;
    if(n == 1){
        cout << "Pre Order Traversal: ";
        tree.preOrderTraversal(tree.root);
    }else if(n == 2){
        cout << "\nIn Order Traversal: ";
        tree.InorderTraversal(tree.root);
    }else if(n ==3){
        cout << "\nPost Order Traversal: ";
        tree.postorderTraversal(tree.root);
    }else{
        cout << "Exit";
    }
    return 0;
}