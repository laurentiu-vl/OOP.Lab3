#include "Node.h"
#include<iostream>

using namespace std;

Node::Node()
{
	
}

Node::Node(int new_data)
{
	this->data = new_data;
	this->left = NULL;
	this->right = NULL;

}

Node::~Node()
{
	delete this->right;
	delete this->left;
}

int Node::get_data()
{
	return this->data;
}

Node* Node::get_left()
{
	return this->left; 
}
 
Node* Node::get_right()  
{
	return this->right;
}

