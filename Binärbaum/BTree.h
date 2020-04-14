
#pragma once
#include "Node.h"
#include <iostream>
#include <string>

using namespace std;

class BTree
{
	/**
	 * @class	Node
	 *
	 * @brief	A node.
	 *
	 * @author	Laurentiu
	 * @date	15-Apr-20
	 */

	friend class Node;

	private:

			/** @brief	The root */
			Node* root;

			/**
			 * @fn	string BTree::inOrder_private(Node*, string);
			 *
			 * @brief	In order private
			 *
			 * @author	Laurentiu
			 * @date	15-Apr-20
			 *
			 * @param [in,out]	parameter1	If non-null, the first parameter.
			 * @param 		  	parameter2	The second parameter.
			 *
			 * @returns	A string.
			 */

			string inOrder_private(Node*, string);

			/**
			 * @fn	string BTree::preOrder_private(Node*, string);
			 *
			 * @brief	Pre order private
			 *
			 * @author	Laurentiu
			 * @date	15-Apr-20
			 *
			 * @param [in,out]	parameter1	If non-null, the first parameter.
			 * @param 		  	parameter2	The second parameter.
			 *
			 * @returns	A string.
			 */

			string preOrder_private(Node*, string);

			/**
			 * @fn	string BTree::postOrder_private(Node*, string);
			 *
			 * @brief	Posts an order private
			 *
			 * @author	Laurentiu
			 * @date	15-Apr-20
			 *
			 * @param [in,out]	parameter1	If non-null, the first parameter.
			 * @param 		  	parameter2	The second parameter.
			 *
			 * @returns	A string.
			 */

			string postOrder_private(Node*, string);


	public:

			/**
			 * @fn	BTree::BTree();
			 *
			 * @brief	Default constructor
			 *
			 * @author	Laurentiu
			 * @date	15-Apr-20
			 */

			BTree();

			/**
			 * @fn	BTree::BTree(int);
			 *
			 * @brief	Constructor
			 *
			 * @author	Laurentiu
			 * @date	15-Apr-20
			 *
			 * @param 	parameter1	The first parameter.
			 */

			BTree(int);

			/**
			 * @fn	BTree::~BTree();
			 *
			 * @brief	Destructor
			 *
			 * @author	Laurentiu
			 * @date	15-Apr-20
			 */

			~BTree();

			/**
			 * @fn	Node* BTree::get_root();
			 *
			 * @brief	Gets the root
			 *
			 * @author	Laurentiu
			 * @date	15-Apr-20
			 *
			 * @returns	Null if it fails, else the root.
			 */

			Node* get_root(); 

			/**
			 * @fn	Node* BTree::insertNode(Node*, int);
			 *
			 * @brief	Inserts a node
			 *
			 * @author	Laurentiu
			 * @date	15-Apr-20
			 *
			 * @param [in,out]	parameter1	If non-null, the first parameter.
			 * @param 		  	parameter2	The second parameter.
			 *
			 * @returns	Null if it fails, else a pointer to a Node.
			 */

			Node* insertNode(Node*, int);

			/**
			 * @fn	Node* BTree::deleteNode(Node*, int);
			 *
			 * @brief	Deletes the node
			 *
			 * @author	Laurentiu
			 * @date	15-Apr-20
			 *
			 * @param [in,out]	parameter1	If non-null, the first parameter.
			 * @param 		  	parameter2	The second parameter.
			 *
			 * @returns	Null if it fails, else a pointer to a Node.
			 */

			Node* deleteNode(Node*, int); 

			/**
			 * @fn	int BTree::countNodes(Node* n);
			 *
			 * @brief	Count nodes
			 *
			 * @author	Laurentiu
			 * @date	15-Apr-20
			 *
			 * @param [in,out]	n	If non-null, a Node to process.
			 *
			 * @returns	The total number of nodes.
			 */

			int countNodes(Node* n);

			/**
			 * @fn	int BTree::countEdges(Node* n);
			 *
			 * @brief	Count edges
			 *
			 * @author	Laurentiu
			 * @date	15-Apr-20
			 *
			 * @param [in,out]	n	If non-null, a Node to process.
			 *
			 * @returns	The total number of edges.
			 */

			int countEdges(Node* n);

			/**
			 * @fn	int BTree::countHeight(Node* n);
			 *
			 * @brief	Count height
			 *
			 * @author	Laurentiu
			 * @date	15-Apr-20
			 *
			 * @param [in,out]	n	If non-null, a Node to process.
			 *
			 * @returns	The total number of height.
			 */

			int countHeight(Node* n);

			//void inOrder(Node*);		//I replaced the void functions with string functions

			//void preOrder(Node*); 

			//void postOrder(Node*); 

			/**
			 * @fn	string BTree::inOrder();
			 *
			 * @brief	In order
			 *
			 * @author	Laurentiu
			 * @date	15-Apr-20
			 *
			 * @returns	A string.
			 */

			string inOrder();

			/**
			 * @fn	string BTree::preOrder();
			 *
			 * @brief	Pre order
			 *
			 * @author	Laurentiu
			 * @date	15-Apr-20
			 *
			 * @returns	A string.
			 */

			string preOrder();

			/**
			 * @fn	string BTree::postOrder();
			 *
			 * @brief	Posts the order
			 *
			 * @author	Laurentiu
			 * @date	15-Apr-20
			 *
			 * @returns	A string.
			 */

			string postOrder();

};