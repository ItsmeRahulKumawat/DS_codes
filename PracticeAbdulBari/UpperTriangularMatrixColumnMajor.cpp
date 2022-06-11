//#include <iostream>
//using namespace std;
//
//class UTM {
//private:
//	int* A;
//	int n;
//public:
//	UTM(int n) {
//		this->n = n;
//		A = new int[n * (n + 1) / 2];
//	}
//	~UTM() {
//		delete[] A;
//	}
//	void Set(int i, int j, int element);
//	int Get(int i, int j);
//	void Display();
//};
//void UTM::Set(int i, int j, int element)
//{
//	if (i <= j)
//	{
//		A[(j * (j - 1) / 2) + i - 1] = element;
//	}
//}
//int UTM::Get(int i, int j)
//{
//	if (i <= j)
//	{
//		cout << "From Get we got " << A[(j * (j - 1) / 2) + i - 1] << endl;
//		return 0;
//	}
//	else
//	{
//		cout << "Not found" << endl;
//	}
//}
//void UTM::Display()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i <= j) {
//				cout << A[(j * (j - 1) / 2) + i - 1 ] << " ";
//			}
//			else
//			{
//				cout << "0 ";
//			}
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	int d, element = 0;
//	cout << "Enter the dimension: ";
//	cin >> d;
//	UTM u(d);
//
//	cout << "Enter the matrix in form" << endl;
//	for (int i = 1; i <= d; i++)
//	{
//		for (int j = 1; j <= d; j++)
//		{
//			cin >> element;
//			u.Set(i, j, element);
//		}
//	}
//
//	u.Get(2, 3);
//	u.Get(3, 3);
//	u.Get(4, 5);
//
//	u.Display();
//	return 0;
//}