//#include <iostream>
//using namespace std;
//
//class Diagonal {
//private:
//	int* A;
//	int n;
//public:
//	Diagonal(int n) {
//		this->n = n;
//		A = new int[n];
//	}
//	~Diagonal() {
//		delete[] A;
//	}
//	void Set(int i, int j, int element);
//	int Get(int i, int j);
//	void Display();
//};
//
//void Diagonal::Set(int i, int j, int element)
//{
//	if (i == j)
//	{
//		A[i - 1] = element;
//	}
//}
//int Diagonal::Get(int i, int j)
//{
//	if (i == j)
//	{
//		cout << A[i - 1] << " got from Get" << endl;
//		return 0;
//	}
//	else
//		cout << "Not found" << endl;
//}
//void Diagonal::Display()
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == j)
//			{
//				cout << A[i] << " ";
//			}
//			else {
//				cout << "0 ";
//			}
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	Diagonal d(4);
//
//	d.Set(1,1,5);
//	d.Set(2, 2, 10);
//	d.Set(3, 3, 15);
//	d.Set(4, 4, 20);
//
//	d.Get(3, 3);
//
//	d.Display();
//
//	return 0;
//}