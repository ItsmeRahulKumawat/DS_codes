//#include<iostream>
//using namespace std;
//
//class node {
//private:
//	node* lchild;
//	int data;
//	node* rchild;
//public:
//	void createMaxHeap(int A[], int n);
//	void displayMaxHeap(int A[], int n);
//	void DeleteMaxHeapNode(int A[], int n);
//}*maxheap = nullptr;
//void node::createMaxHeap(int A[], int n) {
//	node* t = new node;
//	int i = 0;
//	while (true) {
//		if (maxheap == nullptr) {
//			maxheap = new node;
//			maxheap->data = A[1];
//			maxheap->lchild = maxheap->rchild = nullptr;
//		}
//		else {
//			for (i = 2; i <= n; i++) {
//				t = new node;
//				t->data = A[i];
//				t->lchild = t->rchild = nullptr;
//				if (maxheap->lchild == nullptr) {
//					maxheap->lchild = t;
//					if (maxheap->lchild->data > maxheap->data)
//						swap(maxheap->lchild->data, maxheap->data);
//				}
//				else {
//					maxheap->rchild = t;
//				}
//					
//				
//			}
//			if (i == n) {
//				break;
//			}
//		}
//	}
//}
//int main()
//{
//	int A[] = {0,10,20,30,25,5,40,35 };
//	node n;
//	n.createMaxHeap(A, 7);
//	return 0;
//}