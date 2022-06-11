//#include <iostream>
//using namespace std;
//
//template <class T>
//
//class Array {
//private:
//	T* A;
//	int size;
//	int length;
//public:
//	Array() {
//		size = 10;
//		A = new T[10];
//		length = 0;
//	}
//	Array(int sz) {
//		size = sz;
//		length = 0;
//		A = new T[size];
//	}
//	~Array() {
//		cout << "Destruction of array is done" << endl;
//		delete[]A;
//	}
//
//	void display();
//	void insert(int index, T element);
//	T del(int index);
//};
//template<class T>
//void Array<T>::display()
//{
//	cout << "Elements are : ";
//	for (int i = 0; i < length; i++)
//	{
//		cout << A[i] << " ";
//	}
//	cout << endl;
//}
//
//template<class T>
//void Array<T>::insert(int index, T element)
//{
//	if (index >= 0 && index <= length)
//	{
//		for (int i = length - 1; i >= index; i--)
//		{
//			A[i + 1] = A[i];
//		}
//		cout << element << " is inserted at index " << index << endl;
//		A[index] = element;
//		length++;
//	}
//}
//
//template<class T>
//T Array<T>::del(int index)
//{
//	T x = 0;
//	if (index >= 0 && index <= length)
//	{
//		x = A[index];
//		for (int i = index; i < length; i++)
//		{
//			A[i] = A[i + 1];
//		}
//		length--;
//	}
//	return x;
//}
//
//int main()
//{
//	Array<float> arr(5);
//	arr.insert(0, 3.2);
//	arr.insert(1, 5.1);
//	arr.insert(2, 7.3);
//	arr.insert(3, 9.4);
//	arr.insert(4, 11.1);
//	arr.display();
//	float delval = arr.del(2);
//	cout << delval << " is deleted" << endl;
//	arr.display();
//
//	return 0;
//}