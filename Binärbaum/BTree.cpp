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


/*void BTree::inOrder(Node* n)
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
}*/


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