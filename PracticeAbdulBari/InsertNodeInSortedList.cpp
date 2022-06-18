//#include<iostream>
//using namespace std;
//
////Inserting the given element in the sorted list 
//struct node
//{
//	int data;
//	struct node* next;
//}*first=NULL;
//
//int insert(int ele, int pos, struct node *p)
//{
//	struct node* q = new node;
//	struct node* t = new node;
//	t->data = ele;
//	// If insert req is to the first node of the linkedlist
//	if (pos == 1)
//	{
//		t->next = first;
//		first = t;
//	}
//	else if (pos > 0)
//	{
//		pos = pos - 1;
//		while (pos--)
//		{
//			q = p;
//			if (p == NULL)
//			{
//				return 0;
//			}
//			p = p->next;
//		}
//		t->next = p;
//		q->next = t;
//	}
//}
//int display(struct node* p)
//{
//	while (p != NULL)
//	{
//		cout << p->data << " -> ";
//		p = p->next;
//	}
//	return 0;
//}
//int insertIntoSortedList(struct node* p, int ele)
//{
//	struct node* q = new node;
//	struct node* t = new node;
//	t->data = ele;
//	t->next = NULL;
//	
//	if (first == NULL)
//	{
//		first = t;
//	}
//	else
//	{
//		while (p && p->data < ele)
//		{
//			q = p;
//			p = p->next;
//		}
//		if (p == first)
//		{
//			t->next = first;
//			first = t;
//		}
//		else
//		{
//			t->next = q->next;
//			q->next = t;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	display(first);
//	insert(10 , 1, first);
//	insert(15, 2, first);
//	insert(20, 3, first);
//	insert(25, 4, first);
//	insertIntoSortedList(first, 27);
//	display(first);
//
//	return 0;
//}