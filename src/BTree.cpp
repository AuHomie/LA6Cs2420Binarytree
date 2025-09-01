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

        BTree(const BTree&); //Constructor: Creates a copy of a tree

        BTree& operator=(const BTree&); //Overaloaded assignment operator. Copies the BTree

        ~BTree();
        delete root; //Destructor: Deallocates memory

        void insert(Type data){


        }; //Inserts a node into the tree

        void preOrder(); //Displays a pre-order traversal of the tree

        void inOrder(); //Displays an in-order traversal of the tree

        void postOrder(); //Displays a post-order traversal of the tree

        int nodeCount(); //Calculates the number of items in the tree
    
    protected:
        Node<Type> *root;


    private:

};

#endif