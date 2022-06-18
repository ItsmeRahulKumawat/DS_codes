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
//// displaying recursively to same aount of time lega lekin space me n+1 space lega stack me 
//void display(struct node* p)
//{
//	if (p != NULL)
//	{
//		cout << p->data << "->"; 
//		display(p->next);
//	}
//}
//// Most imp agar linkedlist reverse print karna hai to recursion se bot easy way me hojayega khali function pehle
//// call karna hai vo apneap returning time me sab print karte jayega **
//void revdisplay(struct node* p)
//{
//	if (p != NULL)
//	{
//		revdisplay(p->next);
//		cout << p->data << "->";
//	}
//}
//// using recursion for count we can also use simple int c and then c++ everytime and then p->next(alternative)
//int recCount(struct node* p)
//{
//	if (p != NULL)
//		return recCount(p->next) + 1;
//	else
//		return 0;
//}
//// normal kia hai isme 
//int normalSum(struct node* p)
//{
//	int sum = 0;
//	while (p != NULL)
//	{
//		sum = sum + p->data;
//		p = p->next;
//	}
//	return sum;
//}
//// isme recursion se sum kia hai 
//int recSum(struct node* p)
//{
//	if (p != NULL)
//		return recSum(p->next) + p->data;
//	else
//		return 0;
//}
//// maximum elemet in the list 
//int findmax(struct node* p)
//{
//	int max = INT_MIN; // aajse 0 nai leneka bcos agar pura array or linklist me negative number honge to 0 to
//	// sabse bada hoga na to usme to jo exist karte hai ll or array me vo to pata he nai chalega bro 
//	while (p != NULL)
//	{
//		if (max < p->data)
//			max = p->data;
//		p = p->next;
//	}
//	return max;
//}
//// with the help of recursion we did this and last one is ternary operator we can save code lines
//int recfindmax(struct node* p)
//{
//	int max = INT_MIN;
//	if (p == 0)
//		return INT_MIN;
//	max = recfindmax(p->next); // jab return hoga recursion hone ke bad tab vo ek ke p pe ayega to usko data bhi
//	// mil raha hai p->data har ek popup of stack me.
//	return max > p->data ? max : p->data; 
//}
//int ImprovedLinearsearch(struct node* p , int s)
//{
//	struct node* q = new node;
//	// isme kia tha na apun ne array me transpoition and move to head vala technique jo kia tha na apun ne
//	while (p != NULL)
//	{
//		// ab karenge uska position isme khali move to head he hoga, transposition nai kar sakte isme data nai
//		// karna hame sirf nodes change karne hai 
//		if (p->data == s)
//		{
//			q->next = p->next;
//			p->next = first;
//			first = p;
//			return p->data;
//		}
//		q = p;
//		p = p->next;
//	}
//	return NULL;
//}
//int recLinearsearch(struct node *p, int s)
//{
//	if (p == NULL)
//		return 0;
//	if (p->data == s)
//		return p->data;
//	return recLinearsearch(p->next, s);
//}
//
//int insertingNewNode(struct node* p, int pos, int ele) 
//{
//	struct node* t = new node;
//	struct node* q = new node;
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
//	
//	return 0;
//}
//int deleteNode(struct node *p, int pos)
//{
//	struct node* t = new node ;  
//	struct node* q = new node ;
//	int x = -1;
//
//	if (pos < 1 || pos > recCount(p))
//	{
//		return -1;
//	}
//	else if (pos == 1) {
//		q = first;
//		x = first->data;
//		first = first->next;
//		
//		delete q;
//		return x;
//	}
//	else {
//		for (int i = 0; i < pos - 1; i++)
//		{
//			q = p;
//			p = p->next;
//		}
//		x = p->data;
//		q->next = p->next;
//		delete p;
//		return x;
//	}
//
//}
//int isSorted(struct node* p)
//{
//	int x = INT_MIN;
//	while (p != NULL)
//	{
//		if (p->data < x)
//			return 0; 
//		x = p->data;
//		p = p->next;
//	}
//	return 1;
//}
//
//int removeDuplicatesFromSortedlist(struct node* p)
//{
//	p = first;
//	struct node* q = new node;
//	while (p != NULL)
//	{
//		if (q->data != p->data)
//		{
//			q = p;
//			p = p->next;
//		}
//		else
//		{
//			q->next = p->next;
//			delete p;
//			p = q->next;
//		}
//	}
//	return 0;
//}
//int reversingLinkedList_linksonly(struct node* p)
//{
//	struct node* q = NULL;
//	struct node* r = NULL;
//	while (p != NULL)
//	{
//		r = q;
//		q = p;
//		p = p->next;
//		q->next = r;
//	}
//	first = q;
//	return 0;
//}
//int rec_reversingLinkedlist(struct node *q,struct node* p)
//{
//	if (p != NULL)
//	{
//		rec_reversingLinkedlist(p, p->next);
//		p->next = q; // returning time me hoga ye bro har ek piche vale se link bante jayega
//	}
//	else
//		first = q; // p null hogaya na to abhi first q hogaya kyuki q abhi last node pe hai to reverse ke liye 
//					// vo vahi last me hona chaiye 
//	return 0;
//}
//int main()
//{
//	int A[] = { 5,6,6,7,8,8,9 };
//	int size = sizeof(A) / sizeof(A[0]);
//
//	create(A, size);
//
//	display(first);
//	cout << endl;
//
//	//rev display
//	revdisplay(first);
//
//	cout << endl;
//
//	int c = recCount(first);
//	cout << "Count is " << c << endl;
//
//	cout << endl;
//	int n_sum = normalSum(first);
//	cout << "Normal Total of all nodes is " << n_sum << endl;
//
//	cout << endl;
//	int r_sum = recSum(first);
//	cout << "Recursion Total of all nodes is " << r_sum << endl;
//
//	cout << endl;
//	int n_max = findmax(first);
//	cout << "Max element in all nodes is " << n_max << endl;
//
//	cout << endl;
//	int r_max = recfindmax(first);
//	cout << "Max element in all nodes is " << r_max << endl;
//
//	cout << endl;
//	/*int n_search = ImprovedLinearsearch(first,9);
//	cout << "through Linear but improved" << endl;
//	if (n_search)
//		cout << "Element found" << endl;
//	else
//		cout << "Element not found" << endl;*/
//
//	cout << endl;
//	/*display(first);
//	cout << endl;
//	cout << endl;
//	int r_search = recLinearsearch(first, 8);
//	cout << "through recursion" << endl;
//	if(r_search)
//		cout << "Element found" << endl;
//	else
//		cout << "Element not found" << endl;*/
//
//	insertingNewNode(first, 1 , 11);
//	cout << endl;
//	display(first);
//
//	cout << endl;
//
//	int deleted = deleteNode(first, 1);
//	cout << deleted << " is the deleted node" << endl;
//
//	cout << endl;
//	display(first);
//	cout << endl;
//	cout << isSorted(first) << endl;
//	cout << endl;
//	removeDuplicatesFromSortedlist(first);
//	cout << endl;
//	display(first);
//	cout << endl;
//
//	cout << endl;
//	cout << "reversed LInkedlist" << endl;
//	reversingLinkedList_linksonly(first);
//	cout << endl;
//	display(first);
//	cout << endl;
//	cout << "reversed through recursion" << endl;
//	rec_reversingLinkedlist( NULL, first);
//	cout << endl;
//	display(first);
//	cout << endl;
//
//
//	return 0;
//}