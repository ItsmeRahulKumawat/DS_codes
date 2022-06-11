//#include<iostream>
//using namespace std;
//class LTM {
//private:
//	int* A;
//	int n;
//
//public:
//	LTM(int n) {
//		this->n = n;
//		A = new int[n*(n+1)/2];
//	}
//	~LTM() {
//		delete[] A;
//	}
//
//	void Set(int i, int j, int element);
//	int Get(int i, int j);
//	void Display();
//};
//
//void LTM::Set(int i, int j, int element)
//{
//	if (i >= j)
//	{
//		A[(i * (i - 1) / 2) + j - 1] = element;
//	}
//}
//int LTM::Get(int i, int j)
//{
//	if (i >= j)
//	{
//		cout << "from Get:- " << A[(i * (i - 1) / 2) + j - 1] << endl;
//		return 0;
//	}
//}
//void LTM::Display()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i >= j)
//			{
//				cout << A[(i * (i - 1) / 2) + j - 1] << " ";
//			}
//			else
//				cout << "0 ";
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	int d,element = 0;
//	cout << "Enter the dimension: " << endl;
//	cin >> d;
//	LTM l(d);
//
//
//	/*l.Set(1, 1, 11);
//	l.Set(2, 1, 21); l.Set(2, 2, 22);
//	l.Set(3, 1, 31); l.Set(3, 2, 32); l.Set(3, 3, 33);
//	l.Set(4, 1, 41); l.Set(4, 2, 42); l.Set(4, 3, 43); l.Set(4, 4, 44);
//	l.Set(5, 1, 51); l.Set(5, 2, 52); l.Set(5, 3, 53); l.Set(5, 4, 54); l.Set(5, 5, 55);*/
//
//	//OR
//
//	cout << "Enter all elements one by one in matrix form" << endl;
//	for (int i = 1; i <= d; i++)
//	{
//		for (int j = 1; j <= d; j++)
//		{
//			cin >> element;
//			l.Set(i, j, element);
//		}
//	}
//
//	l.Get(3, 2);
//	l.Get(1, 1);
//	l.Get(5, 4);
//
//	l.Display();
//	return 0;
//}