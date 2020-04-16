#pragma once
#include <iostream>

using namespace std;

class Node
{
	/**
	 * @class	BTree
	 *
	 * @brief	A tree.
	 *
	 * @author	Laurentiu
	 * @date	15-Apr-20
	 */
	friend class BTree;

	private: 
			/** @brief	The data */
		int data;
			/** @brief	The left */
		Node* left;
			/** @brief	The right */
		Node* right;

	public:

		/**
		 * @fn	Node::Node();
		 *
		 * @brief	Default constructor
		 *
		 * @author	Laurentiu
		 * @date	15-Apr-20
		 */

		Node();

		/**
		 * @fn	Node::~Node();
		 *
		 * @brief	Destructor
		 *
		 * @author	Laurentiu
		 * @date	15-Apr-20
		 */

		~Node();

		/**
		 * @fn	Node::Node(int);
		 *
		 * @brief	Constructor
		 *
		 * @author	Laurentiu
		 * @date	15-Apr-20
		 *
		 * @param 	parameter1	The first parameter.
		 */

		Node(int);

		/**
		 * @fn	int Node::get_data();
		 *
		 * @brief	Gets the data
		 *
		 * @author	Laurentiu
		 * @date	15-Apr-20
		 *
		 * @returns	The data.
		 */

		int get_data();

		/**
		 * @fn	void Node::set_data(int);
		 *
		 * @brief	Sets a data
		 *
		 * @author	Laurentiu
		 * @date	15-Apr-20
		 *
		 * @param 	parameter1	The first parameter.
		 */

		void set_data(int);

		/**
		 * @fn	Node* Node::get_left();
		 *
		 * @brief	Gets the left
		 *
		 * @author	Laurentiu
		 * @date	15-Apr-20
		 *
		 * @returns	Null if it fails, else the left.
		 */

		Node* get_left();

		/**
		 * @fn	Node* Node::get_right();
		 *
		 * @brief	Gets the right
		 *
		 * @author	Laurentiu
		 * @date	15-Apr-20
		 *
		 * @returns	Null if it fails, else the right.
		 */

		Node* get_right();

		//Node* set_left(int);  Am pus friend class BTree si nu mai trebuie setter si gettere. Dar am gett., nu le-am mai sters din BTree.cpp si Node.cpp

		//Node* set_right(int);
		
};