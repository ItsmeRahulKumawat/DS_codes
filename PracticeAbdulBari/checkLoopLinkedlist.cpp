//#include <iostream>
//#include<unordered_map>
//using namespace std;
//
//struct node
//{
//	int data;
//	struct node* next;
//}*first=NULL;
//
//void create(int A[],int n)
//{
//	int i;
//	struct node *t,*last;
//	first=(struct node*)malloc(sizeof(struct node));
//	first->data=A[0];
//	first->next=NULL;
//	last=first;
//	for(i=1;i < n;i++)    
//	{    	
//		t=(struct node*)malloc(sizeof(struct node));
//		t->data=A[i];
//		t->next=NULL;
//		last->next=t;
//		last=t;
//	}
//} 
//
//int isLoop(struct node* f) // p null hai iska matlab vo linear hai aur agar nai to samaj janeka locha hai
//{
//	struct node* q,*p;
//	p = q = f;
//	// isme ham p ko ek node se badayenge aur q ko 2 se bcos kabhi na kabhi p and q milenge agar loop hoga 
//	// linked list me to aur agar q null hogaya pehle he to samaj janeka Linkd list linear hai.
//	do {
//		p = p->next;
//		q = q->next;
//		q = q != NULL ? q->next : NULL; // agar q null hua to null he rehnedo apan linkedlist linear hai pata chal 
//										// jayega aur agar null nai hoga to q = q->next karo to q 2 steps badh gya.
//	} while (p != NULL && q != NULL && p != q);
//
//	p == q ? cout << "loop hai" : cout << "linear hai"; // agar p == q hai iska matlab vo loop mai hai list 
//														//to true return jayega or fal.
//	return 0;
//}
//int main()
//{
//	struct node* t1, * t2;
//	int A[] = { 10,20,30,40,50 };
//	create(A,5);
//
//	t1 = first->next->next; //ye hamne banaya hai infinite loop linked list me to find out if there is loop or not.
//	t2 = first->next->next->next;
//	t2->next = t1;
//
//	cout << endl;
//
//	isLoop(first);
//	cout << endl;
//
//
//	return 0;
//}