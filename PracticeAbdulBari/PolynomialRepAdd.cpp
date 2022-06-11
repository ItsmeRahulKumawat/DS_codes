//#include<iostream>
//#include<math.h>
//using namespace std;
//
//class Term
//{
//public:
//	int coef; // exponent
//	int exp; // coefficiant
//};
//class Poly
//{
//private:
//	int n; // num of terms
//	Term* t;
//public:
//	Poly(int n) {
//		this->n = n;
//		t = new Term[n];
//		cout << "Enter the terms" << endl;
//
//		for (int i = 0; i < n; i++)
//		{
//			cin >> t[i].coef >> t[i].exp;
//		}
//	}
//	Poly() {
//
//	}
//	~Poly() {
//		delete[] t;
//	}
//	void display();
//	Poly* add(Poly* p1, Poly* p2);
//};
//
//void Poly::display() {
//	for (int i = 0; i < n; i++)
//	{
//		cout << t[i].coef << "x^" << t[i].exp << " ";
//	}
//}
//
//Poly* Poly :: add(Poly* p1, Poly* p2)
//{
//	Poly* sum = new Poly;
//	sum->t = new Term[p1->n + p2->n]; // bcos n to ek specific polynomial ka size hai ye jo kia hai abhi
//									  // isi se poly ke andar jo term* t banaya tha uska size hai bcos vahi to
//									  // array hai.
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (i < p1->n && j < p2->n) // ye khali size hai iske bahar nahi jayega bcos ek me 4 aur dusre me 3 bhi ho 
//									// sakte hai isliye ye lia to last me fir loop ghumake ham jo bacha hai usko 
//									// direct insert kar denge addition vale poly me 
//	{
//		if (p1->t[i].exp > p2->t[j].exp)
//			sum->t[k++] = p1->t[i++];
//		else if (p1->t[i].exp < p2->t[j].exp)
//			sum->t[k++] = p2->t[j++];
//		else {
//			sum->t[k] = p1->t[i];
//			sum->t[k++].coef = p1->t[i++].coef + p2->t[j++].coef;
//		}
//	}
//	for (; i < n; i++) sum->t[k] = p1->t[i];
//	for (; j < n; j++) sum->t[k] = p2->t[j];
//
//	sum->n = k;
//
//	return sum;
//}
//
//int main()
//{
//	Poly p1(5);
//	Poly p2(3);
//	cout << endl;
//	cout << "This is p1" << endl;
//	p1.display();
//	cout << endl;
//	cout << "This is p2" << endl;
//	p2.display();
//	cout << endl;
//	Poly* p3 = new Poly;
//	p3 = p3->add(&p1, &p2);
//	cout << endl;
//	cout << "This is p3 , addition of p1 and p2" << endl;
//	p3->display();
//	cout << endl;
//	
//	return 0;
//}