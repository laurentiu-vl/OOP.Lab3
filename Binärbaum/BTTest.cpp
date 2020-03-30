#include <iostream>
#include <cassert>
#include <string>
#include "BTree.h"
#include "BTTest.h"
#include "Node.h"

using namespace std;

void test()
{
	Node* n = new Node(10);
	assert(n->get_data() == 10);

	BTree* t = new BTree(10);
	t->insertNode(t->get_root(),6);
	t->insertNode(t->get_root(),4);
	t->insertNode(t->get_root(),2);
	t->insertNode(t->get_root(),5);
	t->insertNode(t->get_root(),8);
	t->insertNode(t->get_root(),7);
	t->insertNode(t->get_root(),9);
	t->insertNode(t->get_root(),12);
	t->insertNode(t->get_root(),11);
	t->insertNode(t->get_root(),13);
	t->insertNode(t->get_root(),15);

	
/*	t:						10
				6						12
		4				8			11		13	
	2		5		7		9					(15)
	
*/	
	//cout << t->inOrder(t->get_root());
	string in = "2 4 5 6 7 8 9 10 11 12 13 ";
	string pre = "10 6 4 2 5 8 7 9 12 11 13 ";
	string post = "2 5 4 7 9 8 6 11 13 12 10 ";

	t->deleteNode(t->get_root(),15);
	assert((t->get_root())->get_data() == 10);
	assert(t->countNodes(t->get_root()) == 11);
	assert(t->countEdges(t->get_root()) == 10);
	assert(t->countHeight(t->get_root()) == 4);
	
	cout << "FOR EACH TEST: first row -> function; second row -> expected result";
	cout << endl;

	cout << "inOrder:";
	t->inOrder(t->get_root());
	cout << endl << in << endl;
	cout << endl;

	cout << "preOrder:" << endl;
	t->preOrder(t->get_root());
	cout << endl << pre << endl;
	cout << endl;

	cout << "postOrder:" << endl;
	t->postOrder(t->get_root());
	cout << endl << post << endl;
	t->deleteNode(t->get_root(), 10);
	cout << endl;

	cout << "inOrder after deleting root:" << endl;
	t->inOrder(t->get_root());
	cout << endl << "2 4 5 6 7 8 9 11 12 13 ";

	delete(t);	//EROARE DACA INCERCAM SA ACCESAM t ULTERIOR
}