#include <iostream> // Include the Input/Output stream library for standard I/O operations
using namespace std; // Use the standard namespace to simplify code, allowing access to standard library components without specifying their namespace

// Define a structure for a binary tree node
struct Node {
    int data; // Data stored in the node
    struct Node* left, * right; // Pointers to the left and right child nodes
};

// Function to create a new binary tree node with given data
Node* newNode(int data) {
    Node* temp = new Node; // Allocate memory for a new node
    temp->data = data; // Set the data of the new node
    temp->left = temp->right = NULL; // Set both left and right child pointers to NULL initially
    return temp; // Return the pointer to the new node
}

// Function to print binary tree recursively in preorder
void printTreePreorder(Node* root) {
    if (root == NULL)
        return; // Base case: if the root is NULL, return
    cout << root->data << " "; // Visit the current node
    printTreePreorder(root->left); // Traverse left subtree
    printTreePreorder(root->right); // Traverse right subtree
}

// Main function
int main() {
    Node* root = newNode(1); // Create root node with data 1
    root->left = newNode(2); // Create left child with data 2
    root->right = newNode(3); // Create right child with data 3
    root->left->left = newNode(4); // Create left child of left child with data 4
    root->left->right = newNode(5); // Create right child of left child with data 5
    root->left->right->left = newNode(9); // Create left child of right child of left child with data 9
    root->right->left = newNode(6); // Create left child of right child with data 6
    root->right->right = newNode(7); // Create right child of right child with data 7
    root->right->right->left = newNode(15); // Create left child of right child of right child with data 15

    cout << "Binary Tree (Preorder traversal):" << endl;
    printTreePreorder(root); // Print the binary tree recursively in preorder

    return 0; // Return 0 to indicate successful termination of the program
}
#include <iostream>

using namespace std;



struct Node {

    int data;

    struct Node* left, * right;

};



Node* newNode(int data) {

    Node* temp = new Node;

    temp->data = data;

    temp->left = temp->right = NULL;

    return temp;

}



// Function to print binary tree recursively in preorder

void printTreePreorder(Node* root) {

    if (root == NULL)

        return;

    cout << root->data << " "; // Visit the current node

    printTreePreorder(root->left); // Traverse left subtree

    printTreePreorder(root->right); // Traverse right subtree

}



int main() {

    Node* root = newNode(1);

    root->left = newNode(2);

    root->right = newNode(3);

    root->left->left = newNode(4);

    root->left->right = newNode(5);

    root->left->right->left = newNode(9);

    root->right->left = newNode(6);

    root->right->right = newNode(7);

    root->right->right->left = newNode(15);



    cout << "Binary Tree (Preorder traversal):" << endl;

    printTreePreorder(root);



    return 0;

}
