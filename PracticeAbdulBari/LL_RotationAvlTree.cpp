//#include<iostream>
//using namespace std;
//
//class node {
//private:
//	node* lchild;
//	int data;
//	int height; // for balancing we need height
//	node* rchild;
//public:
//	node* recInsert(node *p,int key);
//	int NodeHeight(node* p);
//	int balanceFactor(node* p);
//	node* LL_Rotation(node* p);
//	node* RR_Rotation(node* p);
//	node* LR_Rotation(node* p);
//	node* RL_Rotation(node* p);
//}*root=nullptr;
//
//int node::balanceFactor(node* p) {
//	int hl, hr;
//	hl = p && p->lchild ? p->lchild->height : 0;
//	hr = p && p->rchild ? p->rchild->height : 0;
//	return hl - hr;
//}
//
//int node::NodeHeight(node* p) {
//	int hl, hr;
//	hl = p && p->lchild ? p->lchild->height : 0;
//	hr = p && p->rchild ? p->rchild->height : 0;
//	return hl > hr ? hl + 1 : hr + 1;
//}
//
//node* node::LL_Rotation(node* p) {
//	node* pl = p->lchild;
//	node* plr = pl->rchild;
//
//	pl->rchild = p;
//	p->lchild = plr;
//
//	p->height = NodeHeight(p);
//	pl->height = NodeHeight(pl);
//
//	if (root == p) {
//		root = pl;
//	}
//	return pl;
//}
//
//node* node::RR_Rotation(node* p) { 
//	return p;
//}
//node* node::LR_Rotation(node* p) {
//	node* pl = p->lchild;
//	node* plr = pl->rchild;
//
//	pl->rchild = plr->lchild;
//	p->lchild = plr->rchild;
//
//	plr->lchild = pl;
//	plr->rchild = p;
//
//	pl->height = NodeHeight(pl);
//	p->height = NodeHeight(p);
//	plr->height = NodeHeight(plr);
//
//	if (p == root) {
//		root = plr;
//	}
//
//	return plr;
//}
//node* node::RL_Rotation(node* p) {
//	return p;
//}
//
//node* node::recInsert(node* p, int key) {
//	node* t;
//	if (p == nullptr) {
//		t = new node;
//		t->data = key;
//		t->height = 1; // matlab sirf root ka 1 lia hai aise to 0 hota hai lekin yaha 1 lia hai 
//		t->lchild = t->rchild = nullptr;
//		return t;
//	}
//	if (key < p->data)
//		p->lchild = recInsert(p->lchild, key);
//	else if(key > p->data)
//		p->rchild = recInsert(p->rchild, key);
//	p->height = NodeHeight(p);
//
//	if (balanceFactor(p) == 2 && balanceFactor(p->lchild) == 1)
//		return LL_Rotation(p);
//	else if (balanceFactor(p) == 2 && balanceFactor(p->lchild) == -1)
//		return LR_Rotation(p);
//	else if (balanceFactor(p) == -2 && balanceFactor(p->lchild) == -1)
//		return RR_Rotation(p);
//	else if (balanceFactor(p) == -2 && balanceFactor(p->lchild) == 1)
//		return RL_Rotation(p);
//
//	return p;
//}
//
//int main() {
//	node n;
//	root = n.recInsert(root,10);
//	n.recInsert(root, 5);
//	n.recInsert(root, 2);
//	
//	return 0;
//}