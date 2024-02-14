#include <iostream> // Include the Input/Output stream library for standard I/O operations
using namespace std; // Use the standard namespace to simplify code, allowing access to standard library components without specifying their namespace

// Define a structure for a binary tree node
struct Node {
    int data; // Data stored in the node
    struct Node* left, * right; // Pointers to the left and right child nodes
};

// Function to create a new binary tree node with given data
Node* newNode(int data) {
    // Allocate memory for a new node
    Node* temp = new Node;
    // Set the data of the new node
    temp->data = data;
    // Set both left and right child pointers to NULL initially
    temp->left = temp->right = NULL;
    // Return the pointer to the new node
    return temp;
}

// Function to print the binary tree recursively with indentation for better visualization
void printTreeRecursive(Node* root, int level = 0) {
    // Base case: if the root is NULL, return
    if (root == NULL)
        return;

    // Print right subtree, increasing the level by 1
    printTreeRecursive(root->right, level + 1);

    // Print current node with appropriate indentation
    for (int i = 0; i < level; ++i)
        cout << " "; // Two spaces for each level of indentation
    cout << root->data << endl;

    // Print left subtree, increasing the level by 1
    printTreeRecursive(root->left, level + 1);
}

// Main function
int main() {
    // Create the binary tree
    Node* root = newNode(1); // Create root node with data 1
    root->left = newNode(2); // Create left child with data 2
    root->right = newNode(3); // Create right child with data 3
    root->left->left = newNode(4); // Create left child of left child with data 4
    root->left->right = newNode(5); // Create right child of left child with data 5
    root->left->right->left = newNode(9); // Create left child of right child of left child with data 9
    root->right->left = newNode(6); // Create left child of right child with data 6
    root->right->right = newNode(7); // Create right child of right child with data 7
    root->right->right->left = newNode(15); // Create left child of right child of right child with data 15

    // Print the binary tree with proper indentation for visualization
    cout << "Binary Tree:" << endl;
    printTreeRecursive(root);

    // Return 0 to indicate successful termination of the program
    return 0;
}
