#include "BTree.h"
#include "Node.h"
#include <iostream>

using namespace std;

void deleteTree2(Node* node)
{
    if (node == NULL) 
        return;

    deleteTree2(node->get_left());
    deleteTree2(node->get_right());
    free(node);
}

BTree::BTree()
{
	
}

BTree::~BTree()
{
    deleteTree2(this->root);
    *this->root = NULL;
}

BTree::BTree(int data)
{
	this->root = new Node(data);
}

Node* BTree::get_root()
{
	return root;
}

int BTree::countNodes(Node* n)
{
    if (n == NULL) 
    {
        return 0;
    }
    else 
    {
        return 1 + countNodes(n->get_left()) + countNodes(n->get_right());
    }
}

int BTree::countEdges(Node* n)
{
    if (n == NULL)
    {
        return 0;
    }
    else
    {
        return countNodes(n) - 1;
    }

}

int BTree::countHeight(Node* n)
{
    if (n == NULL)
        return 0;
    else
    {
        int leftDepth = countHeight(n->left);
        int rightDepth = countHeight(n->right);
        if (leftDepth > rightDepth)
            return (leftDepth + 1);
        else
            return (rightDepth + 1);
    }

}

Node* BTree::insertNode(Node* n, int data)
{
    if (n == NULL)
    {
        return (n = new Node(data));
    }
    else
    {
        if (data < n->get_data())
            n->left = insertNode(n->get_left(), data); 
        else 
            n->right = insertNode(n->get_right(), data);
    }
    return n;
}

Node* BTree::deleteNode(Node* root, int k)
{
    if (root == NULL)
        return root;

    if (root->get_data() > k)
    {
        root->left = deleteNode(root->get_left(), k);
        return root;
    }
    else if (root->get_data() < k)
    {
        root->right = deleteNode(root->get_right(), k);
        return root;
    }

    // If one of the children is empty 
    if (root->get_left() == NULL)
    {
        Node* temp = root->get_right();
        delete root;
        return temp;
    }
    else if (root->get_right() == NULL)
    {
        Node* temp = root->get_left();
        delete root;
        return temp;
    }

    // If both children exist 
    else
    {
        Node* succParent = root->get_right();

        // Find successor 
        Node* succ = root->get_right();
        while (succ->get_left() != NULL)
        {
            succParent = succ;
            succ = succ->get_left();
        }

        succParent->left = succ->get_right();

        // Copy Successor Data to root 
        root->data = succ->get_data();

        // Delete Successor and return root 
        delete succ;
        return root;
    }
}

void BTree::inOrder(Node* n)
{
    if (n == NULL)
        return;
    
    inOrder(n->left);
    cout << (n->data) << " ";
    inOrder(n->right);
}

void BTree::postOrder(Node* n)
{
    if (n == NULL)
        return;
    
    postOrder(n->left);
    postOrder(n->right);
    cout << (n->data) << " ";
}

void BTree::preOrder(Node* n)
{
    if (n == NULL)
        return;
    cout << (n->data) << " ";
    preOrder(n->left);
    preOrder(n->right);
}

/*
string BTree::inOrder(Node* n)
{
    if (n != NULL)
    {
        return inOrder(n->left) + to_string(n->data) + " " + inOrder(n->right); //dam cu cout in main fiindca returneaza;
    }
}

string BTree::postOrder(Node* n)
{
    if (n != NULL)
    {
        return postOrder(n->left) + postOrder(n->right) + to_string(n->data) + " ";
    }
}

string BTree::preOrder(Node* n)
{
    if (n != NULL)
    {
        return  to_string(n->data) + " " + preOrder(n->left) + preOrder(n->right);
    }
}
*/