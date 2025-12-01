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
// Node* CreateTree(){
//     int value;
//     cout << "Enter Node value (-1 for no Node): ";cin >> value;

//     if(value == -1){ 
//         return NULL;
//     }
//     Node* newNode = new Node(value);

//     cout << "Enter left child of: " << value << endl;
//     newNode->left = CreateTree();

//     cout << "Enter right child of: " << value << endl;
//     newNode->right = CreateTree();

//     return newNode;

// }
void preOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    cout << root -> data  << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);    
}
void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout << root -> data  << " ";
    inOrderTraversal(root->right);    
}
void postOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);    
    cout << root -> data  << " ";
}

int main() {    

    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->right->right = new Node(50);
    // Node* root = CreateTree();
    cout << "Pre Order Traversal: ";preOrderTraversal(root);
    cout << "\nIn Order Traversal: ";inOrderTraversal(root);
    cout << "\nPost Order Traversal: ";postOrderTraversal(root);
    return 0;

}