#include "Node.h"
#include<iostream>

using namespace std;

Node::Node()
{
	
}

Node::Node(int new_data)
{
	this->data = data;
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

void Node::set_data(int data1)
{
	this->data = data1;
}