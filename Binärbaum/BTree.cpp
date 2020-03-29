#include "BTree.h"
#include "Node.h"
#include <iostream>

using namespace std;

BTree::BTree()
{
	
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
        int leftDepth = countHeight(n->get_left());
        int rightDepth = countHeight(n->get_right());

        if (leftDepth > rightDepth)
            return (leftDepth + 1);
        else return(rightDepth + 1);
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

        else n->right = insertNode(n->get_right(), data);
    }
    return n;
}






