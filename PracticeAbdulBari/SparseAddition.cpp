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
//	Element* ele;
//public:
//	Sparse(int a) {
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
//	Sparse() {
//
//	}
//	~Sparse() {
//		delete[] ele;
//	}
//	void display();
//	Sparse* add(Sparse* s1, Sparse* s2);
//};
//
//void Sparse::display()
//// ele[k] array hai usme i j and x hai to jab enter karte time 
////hamne 0 1 1 dala tha to ele[k].i = 0 ele[k].j = 1 and ele[k].x = 1 hogaya 
////to jab display karenge to vahi chek karnge na to jab jab i and j ele[k] 
////se mil jaye to iska matlab vahi to hamne element dala tha.
//// 
////ONE MORE 
////
////jab mene ye matrix dala to vo store to hogaya hoga lekin display nai hua 
////bcos 0 2 1 ye vala line me jab pauncha mera loop to i to 0 se 1,2 hogaya tha 
////to kaise display hoga isliye line me dalna hoga matrix 
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
//Sparse* Sparse :: add(Sparse* s1, Sparse* s2)
//{
//	int k = 0;
//	Sparse* sum = new Sparse;
//
//	if (s1->m != s2->m || s1->n != s2->n)
//		cout << "Matrix cannot be added bcos dimensions are not same" << endl;
//	else
//	{
//		sum->ele = new Element[s1->num + s2->num];
//		
//		int i = 0;int j = 0;
//		while (i < s1->num && j < s2->num)
//		{
//			if (s1->ele[i].i < s2->ele[j].i) // s1 ka row number is smaller condition
//				sum->ele[k++] = s1->ele[i++];
//			else if (s1->ele[i].i >	 s2->ele[j].i) // s2 ka row number is smaller condition
//				sum->ele[k++] = s2->ele[j++];
//			else { // both rows are same so checking for whose col is smaller
//				if (s1->ele[i].j < s2->ele[j].j) // col checking same as above row was checking
//					sum->ele[k++] = s1->ele[i++];
//				else if (s1->ele[i].j > s2->ele[j].j)
//					sum->ele[k++] = s2->ele[j++];
//				else { // both colums are rows are same so we will add the element and then store it
//					sum->ele[k] = s1->ele[i];
//					sum->ele[k++].x = s1->ele[i++].x + s2->ele[j++].x;
//				}
//			}
//		}
//		//remaing matrix can be s1 or s2 jiska bhi bacha hoga vo badme add karega ye 
//		for (; i < s1->num; i++) sum->ele[k++] = s1->ele[i];
//		for (; j < s2->num; j++) sum->ele[k++] = s2->ele[j];
//		sum->m = s1->m;
//		sum->n = s1->n;
//		sum->num = k;
//	}
//	return sum;
//}
//int main()
//{
//	cout << "Enter all details of first matrix" << endl;
//	Sparse s1(0);
//	cout << "Enter all details of second matrix" << endl;
//	Sparse s2(0);
//	cout << endl;
//	cout << "S1 is displayed" << endl;
//	s1.display();
//	cout << endl;
//	cout << "S2 is displayed" << endl;
//	s2.display();
//	cout << endl;
//	cout << "Adding s1 and s2" << endl;
//	Sparse *s3 = new Sparse;
//	s3 = s3->add(&s1, &s2);
//	s3->display();
//
//	return 0;
//}