#include <iostream>
#ifndef BTREE_H
#define BTREE_H

template <class Type>
struct Node{
    Type item;
    Node<Type> *left;
    Node<Type> *right;

};

template <class Type>
class BTree {

    public:

        BTree(); //Constructor: Creates an empty tree

        BTree(const BTree<Type>&); //Constructor: Creates a copy of a tree

        BTree<Type> operator=(const BTree<Type>&); //Overaloaded assignment operator. Copies the BTree

        ~BTree(); //Destructor: Deallocates memory

        void insert(Type data){}; //Inserts a node into the tree

        void preOrder(); //Displays a pre-order traversal of the tree

        void inOrder(); //Displays an in-order traversal of the tree

        void postOrder(); //Displays a post-order traversal of the tree

        int nodeCount(); //Calculates the number of items in the tree
    
    protected:
        Node<Type> *root;


    private:
    void copyTree(Node<Type>*curr);
    void destroy(Node<Type> *curr);
    void insert(Type item, Node<Type>* curr);
    void preOder(Node<Type>* curr);
    void inOrder(Node<Type>* curr);
    void postOrder(Node<Type>* curr);
};

//Constructor: Creates a copy of a tree
template <class Type>
BTree<Type>::BTree(const BTree<Type>&){
    copyTree(b.root);

}

//Overaloaded assignment operator. Copies the BTree
template <class Type>
BTree<Type> BTree<Type>::operator=(const BTree<Type>&){
    copyTree(b.root);
    return *this;
} 

template <class Type>
void BTree<Type>::copyTree(Node<Type>*curr){
    if(curr) {
        insert(curr->tem);
        copyTree(curr->left);
        copyTree(curr->right);
    }
}

template <class Type>
BTree<Type>::BTree(){
    root = nullptr;
}

template <class Type>
BTree<Type>::~BTree(){
    destroy(root);
}

template <class Type>
void BTree<Type>::destroy(Node<Type> *curr){
    if(curr != nullptr){
        destroy(curr->left);
        destroy(curr->right);
        delete curr;
    }
}

#endif