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

int BTree::countNodes()
{
    return countNodes_private(this->get_root());
}


int BTree::countNodes_private(Node* n)
{
    if (n == NULL) 
    {
        return 0;
    }
    else 
    {
        return 1 + countNodes_private(n->get_left()) + countNodes_private(n->get_right());
    }
}

int BTree::countEdges()
{
    return countEdges_private(this->get_root());
}

int BTree::countEdges_private(Node* n)
{
    if (n == NULL)
    {
        return 0;
    }
    else
    {
        return countNodes_private(n) - 1;
    }

}

int BTree::countHeight()
{
    return countHeight_private(this->get_root());
}

int BTree::countHeight_private(Node* n)
{
    if (n == NULL)
        return 0;
    else
    {
        int leftDepth = countHeight_private(n->get_left());
        int rightDepth = countHeight_private(n->get_right());
        if (leftDepth > rightDepth)
            return (leftDepth + 1);
        else
            return (rightDepth + 1);
    }

}

Node* BTree::insert(Node* n, int data)
{
    if (n == NULL)
    {
        return (n = new Node(data));
    }
    else
    {
        if (data == n->get_data())
            return nullptr;
        else if (data < n->get_data())
            n->left = insert(n->get_left(), data); 
        else 
            n->right = insert(n->get_right(), data);
    }
    return n;
}

void BTree::insertNode(int data)
{
    this->insert(this->root, data);
}

Node* BTree::deletes(Node* root, int k)
{
    if (root == NULL)
        return root;

    if (root->get_data() > k)
    {
        root->left = deletes(root->left, k);
        return root;
    }
    else if (root->get_data() < k)
    {
        root->right = deletes(root->right, k);
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
    else //if both chilldren exist
    {
        Node* succParent = root;

        // Find successor 
        Node* succ = root->get_right();
        while (succ->get_left() != NULL)
        {
            succParent = succ;
            succ = succ->left;
        }

        if (succParent->data != root->data)
            succParent->left = succ->right;
        else
            succParent->right = succ->right;

        // Copy Successor Data to root 
        root->data = succ->get_data();

        // Delete Successor and return root 
        delete succ;
        return root;
    }
}

void BTree::deleteNode(int data)
{
    this->deletes(this->root, data);
}

string BTree::inOrder_private(Node* n, string sir)          //INORDER
{
    if (n->left != nullptr)
        sir = inOrder_private(n->left, sir);
    sir = sir + " " + to_string(n->data);
    if (n->right != nullptr)
        sir = inOrder_private(n->right, sir);
    return sir;
}

string BTree::inOrder()                                     //INORDER
{
    string afis = "";
    afis = this->inOrder_private(this->root, afis);        
    return afis;
}

string BTree::preOrder_private(Node* n, string sir)         //PREORDER
{
    sir = sir + " " + to_string(n->data);
    if (n->left != nullptr)
        sir = preOrder_private(n->left, sir);
    if (n->right != nullptr)
        sir = preOrder_private(n->right, sir);
    return sir;
}


string BTree::preOrder()                                    //PREORDER
{
        std::string afis = "";
        afis = this->preOrder_private(this->root, afis);
        return afis;   
}

string BTree::postOrder_private(Node* n, string sir)        //POSTORDER
{
    if (n->left != nullptr)
        sir = postOrder_private(n->left, sir);
    if (n->right != nullptr)
        sir = postOrder_private(n->right, sir);
    sir = sir + " " + to_string(n->data);
    return sir;
}

string BTree::postOrder()                                   //POSTORDER
{
    string afis = "";
    afis = this->postOrder_private(root, afis);
    return afis;
}