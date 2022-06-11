//#include<iostream>
//using namespace std;
//
//class Element {
//public:
//	int i;
//	int j;
//	int x;
//};
//class Sparse {
//private:
//	int m;
//	int n;
//	int num;
//	Element *ele;
//public:
//	Sparse() {
//		cout << "Enter Dimensions: ";
//		cin >> m >> n;
//		cout << "Enter Non Zero Elements: ";
//		cin >> num;
//
//		ele = new Element[num];
//
//		cout << "Enter All Non-Zero Elements" << endl;
//		for (int i = 0; i < num; i++)
//		{
//			cin >> ele[i].i >> ele[i].j >> ele[i].x;
//		}
//	}
//	~Sparse() {
//		delete[] ele;
//	}
//	void display();
//	void add();
//};
//
//void Sparse::display()
//// ele[k] array hai usme i j and x hai to jab enter karte time 
////hamne 0 1 1 dala tha to ele[k].i = 0 ele[k].j = 1 and ele[k].x = 1 hogaya 
////to jab display karenge to vahi chek karnge na to jab jab i and j ele[k] 
////se mil jaye to iska matlab vahi to hamne element dala tha.
//{
//	int k = 0;
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			ele[k].i;
//			ele[k].j;
//			if (i == ele[k].i && j == ele[k].j) 
//			{
//				cout << ele[k++].x << " ";
//			}
//			else
//				cout << "0 ";
//		}
//		cout << endl;
//	}
//}
//
//void Sparse::add()
//{
//
//}
//int main()
//{
//	Sparse s1;
//	
//	s1.display();
//	return 0;
//}