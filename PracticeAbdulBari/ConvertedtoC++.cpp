//#include <iostream>
//using namespace std;
//
//class Array {
//private:
//	int* A;
//	int size;
//	int length;
//	void swap(int* x, int* y);
//public:
//	Array() {
//		size = 10;
//		length = 0;
//		A = new int[size];
//	}
//	Array(int sz) {
//		size = sz;
//		length = 0;
//		A = new int[size];
//	}
//	~Array() {
//		delete[]A;
//	}
//	// These all functions are members of the class now so no need to pass the array bcos they can access it bcos they
//	// are in the same class and all functions are members.
//	// Index needs to be given bcos it is not part of class.
//	void display();
//	void append(int x);
//	int insert(int index, int value);
//	int del(int index);
//	int linearsearch(int value);
//	int binarySearch(int key);
//	int recbinarySearch(int a[], int high, int low, int key);
//	int Get(int index);
//	int Set(int index, int value);
//	int Max();
//	int Min();
//	int Sum();
//	int Avg();
//	int reverse1();
//	int reverse2();
//	int insertSort(int value);
//	int isSorted();
//	int reArrange();
//	Array* mergeSortedArrays(Array arr2); // only second array is given in parameter bcos 1st one is itself in the class
//	Array* Union(Array A2);
//	Array* Intersection(Array A2);
//	Array* Difference(Array A2);
//
//};
//
//void Array::display()
//{
//	cout << "Elements are : ";
//	for (int i = 0; i < length; i++)
//	{
//		cout << A[i] << " ";
//	}
//	cout << endl;
//}
//void Array::append(int x)
//{
//	if (length < size)
//	{
//		A[length++] = x;
//	}
//	cout << endl;
//}
//int Array::insert(int index, int value)
//{
//	if (length == size)
//	{
//		cout << "Array is full" << endl;
//		return 0;
//	}
//	if (index >= 0 && index <= length)
//	{
//		for (int i = length; i > index; i--)
//		{
//			A[i] = A[i - 1];
//		}
//		A[index] = value;
//		length++;
//	}
//
//}
//int Array::del(int index)
//{
//	if (index >= 0 && index < length)
//	{
//		int x = A[index];
//		for (int i = index; i < length; i++)
//		{
//			A[i] = A[i + 1];
//		}
//		length--;
//		return x;
//	}
//	return 0;
//}
//void Array::swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int Array::linearsearch(int value)
//{//there are two search improvements in this 1. Transposition 2. Move to head/front
//	for (int i = 0; i < length; i++)
//	{
//		if (A[i] == value)
//		{
//			int method;
//			cout << "Value is found at index " << i << endl;
//			cout << "press 1 for tranpostion and 2 for move to head method" << endl;
//			cin >> method;
//			if (method == 1)
//			{
//				swap(&A[i - 1], &A[i]);
//				cout << "Value is swapped with Transpostion method" << endl;
//			}
//			else
//			{
//				swap(&A[0], &A[i]);
//				cout << "Value is swapped with Move to head method" << endl;
//			}
//			return 0;
//		}
//	}
//	cout << "Value is not found" << endl;
//}
//int Array::binarySearch(int key)
//{
//	int low = 0, high = length, mid;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//
//		if (A[mid] == key)
//		{
//			return mid;
//		}
//		else if (key > A[mid])
//		{
//			low = mid + 1;
//		}
//		else if (key < A[mid])
//		{
//			high = mid - 1;
//		}
//	}
//	return -1;
//}
//int Array::recbinarySearch(int a[], int high, int low, int key)
//{
//	int mid;
//	if (low <= high) {
//		mid = (low + high) / 2;
//		if (key == a[mid])
//			return mid;
//		else if (key > a[mid])
//			return recbinarySearch(a, high, mid + 1, key);
//		else if (key < a[mid])
//			return recbinarySearch(a, mid - 1, low, key);
//	}
//	return -1;
//}
//int Array::Get(int index)
//{
//	if (index >= 0 && index < length)
//	{
//		return index;
//	}
//	return -1;
//}
//int Array::Set(int index, int value)
//{
//	if (index >= 0 && index < length)
//	{
//		A[index] = value;
//	}
//	return 0;
//}
//int Array::Max()
//{
//	int max = A[0];
//	for (int i = 0; i < length; i++)
//	{
//		if (A[i] > max)
//		{
//			max = A[i];
//		}
//	}
//	return max;
//}
//int Array::Min()
//{
//	int min = A[0];
//	for (int i = 0; i < length; i++)
//	{
//		if (min > A[i])
//		{
//			min = A[i];
//		}
//	}
//	return min;
//}
//int Array::Sum()
//{
//	int sum = 0;
//	for (int i = 0; i < length; i++)
//	{
//		sum = sum + A[i];
//	}
//	return sum;
//}
//int Array::Avg()
//{
//	int avg = 0;
//	int sum = 0;
//	int n = 0;
//	for (int i = 0; i < length; i++)
//	{
//		sum = sum + A[i];
//		n++;
//	}
//	return sum / n;
//}
//
//int Array::reverse1()
//{
//	int* B = new int[length - 1];
//	for (int i = 0, j = length - 1; i < j; i++, j--)
//	{
//		B[i] = A[j];
//	}
//	for (int i = 0; i < length; i++)
//	{
//		A[i] = B[i];
//	}
//	return 0;
//}
//int Array::reverse2()
//{
//	for (int i = 0, j = length - 1; i < j; i++, j--)
//	{
//		swap(&A[i], &A[j]);
//	}
//	return 0;
//}
//int Array::insertSort(int value) //insertin value while checking if the value placed is the sorted array position
//{
//	if (length == size)
//	{
//		cout << "array is full" << endl;
//		return 0;
//	}
//
//	for (int i = length - 1; i >= 0; i--)
//	{
//		if (A[i] > value)
//		{
//			A[i + 1] = A[i];
//			A[i] = value;
//		}
//	}
//	length++;
//}
//
//int Array::isSorted()
//{
//	for (int i = 0; i < length - 1; i++)
//	{
//		if (A[i] > A[i + 1])
//		{
//			cout << "Array is not sorted" << endl;
//			return 0;
//		}
//	}
//	cout << "Array is sorted" << endl;
//	return 0;
//}
//
//int Array::reArrange()
//{
//	int i = 0;
//	int j = length - 1;
//	while (i < j)
//	{
//		while (A[i] < 0)
//		{
//			i++;
//		}
//		while (A[j] >= 0)
//		{
//			j--;
//		}
//		if (i < j)
//		{
//			swap(&A[i], &A[j]);
//		}
//	}
//
//	return 0;
//}
//
//Array* Array::mergeSortedArrays(Array A2)
//{
//	int i = 0, j = 0, k = 0;
//	Array* arr3 = new Array(length + A2.length);
//
//	while (i < length && j < A2.length)
//	{
//		if (A[i] < A2.A[j])
//		{
//			arr3->A[k++] = A[i++];
//		}
//		else
//			arr3->A[k++] = A2.A[j++];
//	}
//
//	for (; i < length; i++)
//		arr3->A[k++] = A[i];
//	for (; j < A2.length; j++)
//		arr3->A[k++] = A2.A[j];
//
//	arr3->length = length + A2.length;
//
//	return arr3;
//}
//
//Array* Array::Union(Array A2)
//{
//	int i = 0, j = 0, k = 0;
//	Array* A3 = new Array(length + A2.length);
//
//	while (i < length && j < A2.length)
//	{
//		if (A[i] < A2.A[j])
//			A3->A[k++] = A[i++];
//		else if (A[i] > A2.A[j])
//			A3->A[k++] = A2.A[j++];
//		else
//		{
//			A3->A[k++] = A[i++];
//			j++;
//		}
//	}
//
//	for (; i < length; i++)
//		A3->A[k++] = A[i];
//	for (; j < A2.length; j++)
//		A3->A[k++] = A2.A[j];
//
//	A3->length = k;
//	A3->size = 20;
//
//	return A3;
//}
//
//Array* Array::Intersection(Array A2)
//{
//	int i = 0, j = 0, k = 0;
//	Array* A3 = (Array*)malloc(sizeof(Array));
//
//	while (i < length && j < A2.length)
//	{
//		if (A[i] < A2.A[j])
//			i++;
//		else if (A[i] > A2.A[j])
//			j++;
//		else if (A[i] == A2.A[j])
//		{
//			A3->A[k++] = A[i++];
//			j++;
//		}
//	}
//
//	A3->length = k;
//	A3->size = 20;
//
//	return A3;
//}
//Array* Array::Difference(Array A2)
//{
//	int i = 0, j = 0, k = 0;
//	Array* A3 = (Array*)malloc(sizeof(Array));
//
//	while (i < length && j < A2.length)
//	{
//		if (A[i] < A2.A[j])
//			A3->A[k++] = A[i++];
//		else if (A[i] > A2.A[j])
//			j++;
//		else
//		{
//			i++;
//			j++;
//		}
//	}
//	for (; i < length; i++)
//		A3->A[k++] = A[i];
//
//	A3->length = k;
//	A3->size = 20;
//
//	return A3;
//}
//
//int main()
//{
//	Array *arr1;
//	int ch,sz;
//	int x, index = 0;
//	int element;
//	int min, max;
//
//	cout << "Enter the size of array: ";
//	cin >> sz;
//	arr1 = new Array(sz);
//
//	do {
//			cout << endl << "Menu" << endl;
//			cout << "1. Insert" << endl;
//			cout << "2. Append" << endl;
//			cout << "3. Delete" << endl;
//			cout << "4. Display" << endl;
//			cout << "5. LinearSearch" << endl;
//			cout << "6. BinarySearch" << endl;
//			cout << "7. Recursive Binary Search" << endl;
//			cout << "8. Get" << endl;
//			cout << "9. Set" << endl;
//			cout << "10. Max" << endl;
//			cout << "11. Min" << endl;
//			cout << "12. Sum" << endl;
//			cout << "13. Avg" << endl;
//			cout << "14. Reverse1" << endl;
//			cout << "15. Reverse2" << endl;
//			cout << "16. Sorted Insert" << endl;
//			cout << "17. Is Sorted" << endl;
//			cout << "18. Re Arrange" << endl;
//			cout << "19. Merge Sorted Arrays" << endl;
//			cout << "20. Union" << endl;
//			cout << "21. Intersection" << endl;
//			cout << "22. Differnce" << endl;
//			cout << "23. Exit" << endl;
//
//		cout << "Choose any of the option: ";
//		cin >> ch;
//		switch (ch)
//		{
//		case 1:cout << "Enter an Index and then Element to Insert: ";
//			cin >> index >> element;
//			arr1->insert(index,element);
//			break;
//		case 3:
//			cout << "Index :";
//			cin >> index;
//			arr1->del(index);
//			break;
//
//		case 10: max = arr1->Max();
//			cout << "Max: " << max;
//			break;
//		case 11: min = arr1->Min();
//			cout << "Min: " << min;
//			break;
//		case 4:arr1->display();
//			break;
//		}
//
//	} while (ch!=23);
//	return 0;
//}