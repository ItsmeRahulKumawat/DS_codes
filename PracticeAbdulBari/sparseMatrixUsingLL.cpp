//#include<iostream>
//using namespace std;
//
//struct node {
//	int col;
//	int data;
//	struct node* next;
//};
//void addData(struct node *A, int c, int d) {
//	struct node* p;
//	p = new node;
//	
//	p->col = c;
//	p->data = d;
//	p->next = nullptr;
//
//	A = p;
//}
//void display(struct node * A[], int m , int n) {
//	struct node* p;
//	
//	for (int i = 0; i < m; i++)
//	{
//		p = A[i];
//		for (int j = 0; j < n; j++)
//		{
//			if (j == p->col)
//				cout << p->data << " ";
//			else
//				cout << "0 ";
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	int m, n;
//	cout << "How much rows x colums do you want- ";
//	cin >> m >> n;
//
//	struct node* A[10];
//
//	addData(A[1], 3, 5);
//	addData(A[1], 5, 5);
//	addData(A[2], 2, 5);
//	addData(A[3], 1, 5);
//	addData(A[4], 0, 5);
//
//	display(A, m, n);
//
//	return 0;
//}