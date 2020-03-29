#pragma once
#include <iostream>

using namespace std;

class Node
{
	private: 
		int data;
		Node* left;
		Node* right;

	public:
		Node();

		~Node();

		Node(int);

		int get_data();

		void set_data(int);
};