//#include <iostream>
//using namespace std;
//
//class Matrix {
//public:
//	int A[10];
//	int n;
//};
//void Set(Matrix *m , int i, int j, int element)
//{
//	if (i == j)
//	{
//		m->A[i - 1] = element;// just to put it at one position earlier 
//		// eg - suppose we set 1,1,10 so it should go to 0,0,10 first element :)
//	}
//}
//int Get(Matrix m, int i, int j)
//{
//	if (i == j)
//		return m.A[i - 1];
//	else
//		return 0;
//}
//void display(Matrix m)
//{
//	for (int i = 0; i < m.n; i++)
//	{
//		for (int j = 0; j < m.n; j++)
//		{
//			if (i == j) {
//				cout << m.A[i] << " ";
//			}
//			else {
//				cout << "0 ";
//			}
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	Matrix m;
//	m.n = 4;
//
//	Set(&m, 1, 1, 10);
//	Set(&m, 2, 2, 20);
//	Set(&m, 3, 3, 30);
//	Set(&m, 4, 4, 40);
//
//	cout << "\nGetting a value " << Get(m, 2, 2) << endl;
//
//	display(m);
//
//	return 0;
//}