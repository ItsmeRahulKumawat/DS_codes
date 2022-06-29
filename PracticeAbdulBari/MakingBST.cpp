//#include<iostream>
//using namespace std;
//
//bool flag = false;
//
//class Node {
//private:
//	Node* lchild;
//	int data;
//	Node* rchild;
//public:
//	void insert(int key);
//	Node* Rec_insert(Node *p,int key);
//	void Inorder(Node* p);
//	Node* Search(int key);
//	Node* Rec_Search(Node* p, int key);
//	void isFound(Node* q);
//	void CleanUp(Node* p);
//	Node* Delete(Node* p, int key);
//	int Height(Node* p);
//	Node* InPre(Node* p);
//	Node* InSuc(Node *p);
//}*root = nullptr;
//
//void Node::insert(int key) {
//	Node* r = new Node,* p;
//	Node* t = root;
//	if (root == nullptr) {
//		p = new Node;
//		p->data = key;
//		p->lchild = p->rchild = nullptr;
//		root = p;
//		return;
//	}
//	while (t != nullptr) {
//		r = t;
//		if (key < t->data)
//			t = t->lchild;
//		else if (key > t->data)
//			t = t->rchild;
//		else
//			return;
//	} // idhar tak aya iska matlab ye jagah pe element jana chaiye 
//	// to yaha naya pointer leke uska node banake fir pichle r pointer se check karenge 
//	// ke uska val bada ya key ka aur uske hisab se lchild or rchild me dalenge
//	p = new Node;
//	p->data = key;
//	p->lchild = p->rchild = nullptr;
//	
//	if (key < r->data)
//		r->lchild = p;
//	else
//		r->rchild = p;
//}
//
//Node* Node::Rec_insert(Node* p, int key) {
//	Node* t;
//	if (p == nullptr) {
//		t = new Node;
//		t->data = key;
//		t->lchild = t->rchild = nullptr;
//		return t; // t ka address ye bhejega recusrion ke time to piche ek pointer rakhne ka 
//					// jarurat nahi direct iske node ka address pe store hoga value 
//	}
//	if (key > p->data)
//		p->rchild = Rec_insert(p->rchild, key);
//	else if (key < p->data)
//		p->lchild = Rec_insert(p->lchild, key);
//
//	return p;
//}
//
//void Node::Inorder(Node* p) { // to check whether the nodes are inserted proper in BST
//	if (p != nullptr) {
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//
//Node* Node::Search(int key) {
//	Node* p = root;
//	while (p != nullptr)
//	{
//		if (key == p->data)
//			return p;
//		else if (key < p->data)
//			p = p->lchild;
//		else
//			p = p->rchild;
//	}
//	return nullptr;
//}
//
//Node* Node::Rec_Search(Node* p, int key) {
//	if (p == nullptr)
//		return nullptr;
//	if (p->data == key)
//		return p;
//	else if (key > p->data)
//		return Rec_Search(p->rchild, key);
//	else
//		return Rec_Search(p->lchild, key);
//}
//
//void Node::isFound(Node *q) {
//	if (q != nullptr)
//		cout << "Node Element " << q->data << " is found" << endl;
//	else
//		cout << "Node Element not found" << endl;
//}
//
//void Node::CleanUp(Node* p)
//{
//	if (p != nullptr)
//	{
//		cout << "cleaning out : " << p->data << endl;
//		Node* temp = p;
//		CleanUp(p->lchild);
//		CleanUp(p->rchild);
//		delete temp;
//	}
//}
//
//int Node::Height(Node *p) {
//	int x, y;
//	if (p == nullptr) 
//		return 0;
//	x = Height(p->lchild);
//	y = Height(p->rchild);
//	return x > y ? x + 1 : y + 1;
//}
//
//Node* Node::InPre(Node* p) {
//	while (p && p->rchild != nullptr) //jabtak p hai and p ka rchild null nai hai tab tak jate jaa
//		p = p->rchild;
//	return p;
//}
//
//Node* Node::InSuc(Node* p) {
//	while (p && p->lchild != nullptr) {
//		p = p->lchild;
//	}
//	return p;
//}
//
//Node* Node::Delete(Node* p, int key) {
//	Node* q;
//	if (p == nullptr)
//		return nullptr;
//	if (p->lchild == nullptr && p->rchild == nullptr) {
//		if (p == root) // agar left and right child hai he nai iska matlav vo leaf node hai to ek leaf he to
//			root = nullptr;	// del karna hai to vo karke root null kardia
//		delete p;
//		return nullptr; // ye final node ko null return karega to vo null hojayega niche rec function se
//	}
//
//	if (key > p->data)
//		p->rchild = Delete(p->rchild, key);
//	else if (key < p->data)
//		p->lchild = Delete(p->lchild, key);
//	else { // we can delete by placing inorder predecessor and inorder successor 
//		if (Height(p->lchild) > Height(p->rchild)) { // if height of lchild will be more than rchild then we 
//											// we will take that side of predecessor or successor
//			q = InPre(p->lchild);
//			p->data = q->data;
//			p->lchild = Delete(p->lchild, q->data);
//		} // agar left side ha tree ka height zyada hoga to predecessor ke liye call karenge nai to successor ke liye 
//		else {
//			q = InSuc(p->rchild);
//			p->data = q->data;
//			p->rchild = Delete(p->rchild, q->data);
//		}
//	}
//	return p;
//}
//
//int main()
//{
//	Node* q;
//	Node n;
//	/*n.insert(10);
//	n.insert(5);
//	n.insert(20);
//	n.insert(8);
//	n.insert(30);*/
//	root = n.Rec_insert(root, 10);
//	n.Rec_insert(root, 5);
//	n.Rec_insert(root, 20);
//	n.Rec_insert(root, 8);
//	n.Rec_insert(root, 30);
//
//	n.Delete(root, 10);
//	cout << endl;
//
//	n.Inorder(root);
//	cout << endl;
//	cout << endl;
//	cout << "Iterative Searching in BST" << endl;
//	q = n.Search(20);
//	n.isFound(q);
//	cout << endl;
//	cout << "Recursive Searching in BST" << endl;
//	q = n.Rec_Search(root,4);
//	n.isFound(q);
//
//	n.CleanUp(root);
//	return 0;
//}