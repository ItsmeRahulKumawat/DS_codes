//#include<iostream>
//using namespace std;
//
//struct node
//{
//	int data;
//	struct node* next;
//}*first=NULL;
//void create(int A[], int n)
//{
//	struct node* t,*last;
//	first = new node;
//	first->data = A[0];
//	first->next = NULL;
//	last = first;
//
//	for (int i = 1; i < n; i++)
//	{
//		t = new node;
//		t->data = A[i];
//		t->next = NULL;
//		last->next = t;
//		last = t;
//	}
//}
//void display(struct node* p)
//{
//	while (p != NULL)
//	{
//		cout << p->data << "-> ";
//		p = p->next;
//	}
//}
//int main()
//{
//	int A[] = { 1,2,3,4,5 };
//	int size = sizeof(A) / sizeof(A[0]);
//
//	create(A, size);
//	display(first);
//
//	return 0;
//}