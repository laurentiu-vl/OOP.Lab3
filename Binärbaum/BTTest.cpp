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
	t->insertNode(6);
	t->insertNode(4);
	t->insertNode(2);
	t->insertNode(5);
	t->insertNode(8);
	t->insertNode(7);
	t->insertNode(9);
	t->insertNode(12);
	t->insertNode(11);
	t->insertNode(13);
	t->insertNode(15);

	
/*	t:						10
				6						12
		4				8			11		13	
	2		5		7		9					(15)
	
*/	
	//cout << t->inOrder(t->get_root());
	//string in = "2 4 5 6 7 8 9 10 11 12 13 (15)";
	//string pre = "10 6 4 2 5 8 7 9 12 11 13 (15) ";
	//string post = "2 5 4 7 9 8 6 11 13 12 10 ";

	t->deleteNode(15);
	assert((t->get_root())->get_data() == 10);
	assert(t->countNodes(t->get_root()) == 11);
	assert(t->countEdges(t->get_root()) == 10);
	assert(t->countHeight(t->get_root()) == 4);
	
	//cout << "FOR EACH TEST: first row -> function; second row -> expected result\n";


	/*cout << "inOrder:";
	t->inOrder(t->get_root());
	cout << endl << in << endl;
	cout << endl;
	
	cout << "preOrder:" << endl;
	t->preOrder(t->get_root());
	//cout << endl << t << endl;
	cout << endl;

	/*cout << "postOrder:" << endl;
	t->postOrder(t->get_root());
	cout << endl << post << endl;
	t->deleteNode(t->get_root(), 10);
	cout << endl;

	cout << "inOrder after deleting root:" << endl;
	t->inOrder(t->get_root());
	cout << endl << "2 4 5 6 7 8 9 11 12 13 ";
	*/


	delete(t);	//EROARE DACA INCERCAM SA ACCESAM t ULTERIOR
}

void InOrder()
{
	Node* n = new Node(10);
	assert(n->get_data() == 10);

	BTree* t = new BTree(10);
	t->insertNode(6);
	t->insertNode(4);
	t->insertNode(2);
	t->insertNode(5);
	t->insertNode(8);
	t->insertNode(7);
	t->insertNode(9);
	t->insertNode(12);
	t->insertNode(11);
	t->insertNode(13);
	t->insertNode(15);


	cout << '\n';
	string in = "Inorder: ";
	in += t->inOrder();
	cout << in <<"\n";
}

void PreOrder()
{
	Node* n = new Node(10);
	assert(n->get_data() == 10);

	BTree* t = new BTree(10);
	t->insertNode(6);
	t->insertNode(4);
	t->insertNode(2);
	t->insertNode(5);
	t->insertNode(8);
	t->insertNode(7);
	t->insertNode(9);
	t->insertNode(12);
	t->insertNode(11);
	t->insertNode(13);
	t->insertNode(15);;

	cout << '\n';
	string sir = "Preorder: ";
	sir += t->preOrder();
	cout << sir << "\n";
}

void PostOrder()
{
	Node* n = new Node(10);
	assert(n->get_data() == 10);

	BTree* t = new BTree(10);
	t->insertNode(6);
	t->insertNode(4);
	t->insertNode(2);
	t->insertNode(5);
	t->insertNode(8);
	t->insertNode(7);
	t->insertNode(9);
	t->insertNode(12);
	t->insertNode(11);
	t->insertNode(13);
	t->insertNode(15);
	
	t->deleteNode(15); /// am sters ultimul nod

	cout << '\n';
	string s = "Postorder: ";
	s += t->postOrder();
	std::cout << s << "\n";
}