#include <iostream>

struct Node {
    int data;
    Node *left;
    Node *right;
};

class BinaryTree {

private:
    static Node *createNode(int data) {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->left = newNode->right = nullptr;
        return newNode;
    }

public:
    static Node *insert(Node **root, int data) {
        if (*root == nullptr) {
            *root = createNode(data);
        } else if (data <= (*root)->data) {
            (*root)->left = insert(&(*root)->left, data);
        } else {
            (*root)->right = insert(&(*root)->right, data);
        }
        return (*root);
    }


public:
    static void infix(Node **root) {
        if (*root == nullptr) return;
        infix(&(*root)->left);
        printf("%d ", (*root)->data);
        infix(&(*root)->right);

    }

public:
    static void prefix(Node **root) {
        if (*root == nullptr) return;
        printf("%d ", (*root)->data);
        prefix(&(*root)->left);
        prefix(&(*root)->right);

    }

public:
    static void postfix(Node **root) {
        if (*root == nullptr) return;
        postfix(&(*root)->left);
        postfix(&(*root)->right);
        printf("%d ", (*root)->data);

    }


public:
    static bool search(Node **root, int data) {
        if (*root == nullptr) return false;
        else if ((*root)->data == data) return true;
        else if (data <= (*root)->data) return search(&(*root)->left, data);
        else return search(&(*root)->right, data);
    }

public:
    static int min(Node **root) {
        if (*root == nullptr) return false;
        if ((*root)->left == nullptr) return (*root)->data;
        else return min(root);
    }
};

int main() {
    struct Node *root;
    root = nullptr;
    BinaryTree::insert(&root, 22);
    BinaryTree::insert(&root, 2);
    BinaryTree::insert(&root, 42);

    BinaryTree::infix(&root);

//    std::cout << BinaryTree::min(&root);
//    if (BinaryTree::search(&root, 221)) {
//        std::cout << "Found";
//    } else {
//        std::cout << "Not found";
//    }
    return 0;
}
