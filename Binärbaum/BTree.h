
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
			* @fn	Node* BTree::insert(Node*, int);
			*
			* @brief	Inserts a node (but needs the root as parameter)
						It's an intermidiate for the function insertNode.
			*
			* @author	Laurentiu
			* @date	15-Apr-20
			*
			* @param [in,out]	parameter1	If non-null, the first parameter.
			* @param 		  	parameter2	The second parameter(allways the root)
			*
			* @returns	Null if it fails, else a pointer to a Node.
			*/

			Node* insert(Node*, int);

			/**
			 * @fn	Node* BTree::deletes(Node*, int);
			*
			* @brief	Deletes the node(INTERMIDATE FUNCTION)
			*
			 * @param [in,out]	parameter1	If non-null, the first parameter.
			* @param 		  	parameter2	The second parameter.
			*
			* @returns	Null if it fails, else a pointer to a Node.
			*/

			Node* deletes(Node*, int);

			/**
			* @fn	int BTree::countNodes_private(Node* );
			*
			* @brief	Count nodes
			*
			 * @param [in,out]	parameter1	If non-null, the first parameter.
			 * @returns	The total number of nodes.
			*/

			int countNodes_private(Node* n);

			/**
			 * @fn	int BTree::countEdges_private(Node* n);
			 *
			 * @brief	Count edges
			 *
			 * @param [in,out]	parameter1	If non-null, the first parameter.
			 * @returns	The total number of edges.
			 */

			int countEdges_private(Node* n);

			/**
			 * @fn	int BTree::countHeight_private(Node* n);
			 *
			 * @brief	Count height
			 *
			 * @param [in,out]	parameter1	If non-null, the first parameter.
			 * @returns	The total number of height.
			 */

			int countHeight_private(Node* n);

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
			* @fn	Node* BTree::insertNode(int);
			*
			* @brief	Inserts a node 
			*
			* @author	Laurentiu
			* @date	15-Apr-20
			*		
			* @param	parameter1	The first parameter
			*/
			
			void insertNode(int data);

			/**
			 * @fn	Node* BTree::deletesNode(int);
			 *
			 * @brief	Deletes the node
			 *
			 * @author	Laurentiu
			 * @date	15-Apr-20
			 *	
			 * @param	parameter1	The first parameter.
			 *
			 */
		

			void deleteNode(int data);

			/**
			 * @fn	int BTree::countNodes();
			 *
			 * @brief	Count nodes
			 *
			 * @returns	The total number of nodes.
			 */

			int countNodes();

			/**
			 * @fn	int BTree::countEdges();
			 *
			 * @brief	Count edges
			 *
			 * @returns	The total number of edges.
			 */

			int countEdges();

			/**
			 * @fn	int BTree::countHeight();
			 *
			 * @brief	Count height
			 *
			 * @returns	The total number of height.
			 */

			int countHeight();

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