//#include<iostream>
//#include<stack>
//using namespace std;
//
//class node {
//private:
//	node* lchild;
//	int data;
//	node* rchild;
//public:
//	void CreateFromTrav(int pre[], int size);
//}*root = NULL;
//
//void node :: CreateFromTrav(int pre[], int size) {
//	stack<node*> st;
//	node* t = new node;
//	node* p;
//	t->data = pre[0];
//	t->lchild = t->rchild = nullptr;
//	root = t;
//	p = root;
//	
//	for (int i = 1; i < size; i++) {
//		if (pre[i] < p->data) {
//			t = new node;
//			t->data = pre[i];
//			t->rchild = t->lchild = nullptr;
//			p->lchild = t;
//			st.push(p);
//			p = t;
//		}
//		else if (pre[i] > p->data) {
//			if (st.empty()) {
//				t = new node;
//				t->data = pre[i];
//				t->lchild = t->rchild = nullptr;
//				p->rchild = t;
//				p = t;
//			}
//			else if (pre[i] < st.top()->data && pre[i] > p->data) {
//				t = new node;
//				t->data = pre[i];
//				t->lchild = t->rchild = nullptr;
//				p->rchild = t;
//				p = t;
//			}
//			
//			else {
//				p = st.top();
//				st.pop();
//				i--;
//			}
//		}
//	}
//}
//
//int main() {
//	int pre[] = { 30,20,10,15,25,40,50,45 };
//	node n;
//	n.CreateFromTrav(pre, 8);
//	return 0;
//}