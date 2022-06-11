//#include <iostream>
//using namespace std;
//
////struct array
////{
////	int a[20];
////	int size;
////	int length;
////};
//class Array
//{
//public:
//	int A[10];
//	int size;
//	int length;
//};
//void display(Array arr)
//{
//	cout << "Elements are : ";
//	for (int i = 0; i < arr.length; i++)
//	{
//		cout << arr.A[i] << " ";
//	}
//	cout << endl;
//}
//void append(Array *arr, int x)
//{
//	if (arr->length < arr->size)
//	{
//		arr->A[arr->length++] = x;
//	}
//	cout << endl;
//}
//void insert(Array *arr, int index, int value)
//{
//	if (index >= 0 && index <= arr->length)
//	{
//		for (int i = arr->length; i > index; i--)
//		{
//			arr->A[i] = arr->A[i - 1];
//		}
//		arr->A[index] = value;
//		arr->length++;
//	}
//	
//}
//int del(Array* arr, int index)
//{
//	if (index >= 0 && index < arr->length)
//	{
//		int x = arr->A[index];
//		for (int i = index; i < arr->length; i++)
//		{
//			arr->A[i] = arr->A[i + 1];
//		}
//		arr->length--;
//		return x;
//	}
//	return 0;
//}
//void swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int linearsearch(Array *arr, int value)
//{//there are two search improvements in this 1. Transposition 2. Move to head/front
//	for (int i = 0; i < arr->length; i++)
//	{
//		if (arr->A[i] == value)
//		{
//			int method;
//			cout << "Value is found at index " << i << endl;
//			cout << "press 1 for tranpostion and 2 for move to head method" << endl;
//			cin >> method;
//			if (method == 1)
//			{
//				swap(&arr->A[i - 1], &arr->A[i]);
//				cout << "Value is swapped with Transpostion method" << endl;
//			}
//			else
//			{
//				swap(&arr->A[0], &arr->A[i]);
//				cout << "Value is swapped with Move to head method" << endl;
//			}
//			return 0;
//		}
//	}
//	cout << "Value is not found" << endl;
//}
//int binarySearch(Array *arr2,int key)
//{
//	int low = 0, high = arr2->length, mid;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//
//		if (arr2->A[mid] == key)
//		{
//			return mid;
//		}
//		else if (key > arr2->A[mid])
//		{
//			low = mid + 1;
//		}
//		else if (key < arr2->A[mid])
//		{
//			high = mid - 1;
//		}
//	}
//	return -1;
//}
//int recbinarySearch(int a[], int high, int low, int key)
//{
//	int mid;
//	if (low <= high) {
//		mid = (low + high) / 2;
//		if (key == a[mid])
//			return mid;
//		else if (key > a[mid])
//			return recbinarySearch(a, high, mid + 1, key);
//		else if (key < a[mid])
//			return recbinarySearch(a, mid -1, low, key);
//	}
//	return -1;
//}
//int Get(Array arr2, int index)
//{
//	if (index >= 0 && index < arr2.length)
//	{
//		return arr2.A[index];
//	}
//	return -1;
//}
//int Set(Array *arr2, int index, int value)
//{
//	if (index >= 0 && index < arr2->length)
//	{
//		arr2->A[index] = value;
//	}
//	return 0;
//}
//int Max(Array arr2)
//{
//	int max = arr2.A[0];
//	for (int i = 0; i < arr2.length; i++)
//	{
//		if (arr2.A[i] > max)
//		{
//			max = arr2.A[i];
//		}
//	}
//	return max;
//}
//int Min(Array arr2)
//{
//	int min = arr2.A[0];
//	for (int i = 0; i < arr2.length; i++)
//	{
//		if (min > arr2.A[i])
//		{
//			min = arr2.A[i];
//		}
//	}
//	return min;
//}
//int Sum(Array arr2)
//{
//	int sum = 0;
//	for (int i = 0; i < arr2.length; i++)
//	{
//		sum = sum + arr2.A[i];
//	}
//	return sum;
//}
//int Avg(Array arr2)
//{
//	int avg = 0;
//	int sum = 0;
//	int n = 0;
//	for (int i = 0; i < arr2.length; i++)
//	{
//		sum = sum + arr2.A[i];
//		n++;
//	}
//	return sum/n;
//}
//
//int reverse1(Array *arr2)
//{
//	int *B = new int[arr2->length-1];
//	for (int i = 0, j = arr2->length-1; i < j; i++, j--)
//	{
//		B[i] = arr2->A[j];
//	}
//	for (int i = 0; i < arr2->length; i++)
//	{
//		arr2->A[i] = B[i];
//	}
//	return 0;
//}
//int reverse2(Array *arr2)
//{
//	for (int i = 0, j = arr2->length - 1; i < j ; i++, j--)
//	{
//		swap(&arr2->A[i], &arr2->A[j]);
//	}
//	return 0;
//}
//int insertSort(Array *arr2, int value) //insertin value while checking if the value placed is the sorted array position
//{
//	if (arr2->length == arr2->size)
//	{
//		cout << "array is full" << endl;
//		return 0;
//	}
//
//	for (int i = arr2->length - 1; i >= 0; i--)
//	{
//		if (arr2->A[i] > value)
//		{
//			arr2->A[i + 1] = arr2->A[i];
//			arr2->A[i] = value;
//		}
//	}
//	arr2->length++;
//}
//
//int isSorted(Array arr2)
//{
//	for (int i = 0; i < arr2.length-1; i++)
//	{
//		if (arr2.A[i] > arr2.A[i + 1])
//		{
//			cout << "Array is not sorted" << endl;
//			return 0;
//		}
//	}
//	cout << "Array is sorted" << endl;
//	return 0;
//}
//
//int reArrange(Array* arr3)
//{
//	int i = 0;
//	int j = arr3->length - 1;
//	while (i < j)
//	{
//		while (arr3->A[i] < 0)
//		{
//			i++;
//		}
//		while (arr3->A[j] >= 0)
//		{
//			j--;
//		}
//		if (i < j)
//		{
//			swap(&arr3->A[i], &arr3->A[j]);
//		}
//	}
//
//	return 0;
//}
//
//Array* mergeSortedArrays(Array *arr, Array *arr2)
//{
//	int i = 0, j = 0, k = 0;
//	Array* arr4 = (Array*)malloc(sizeof(Array));
//
//	
//
//	while (i < arr->length && j < arr2->length)
//	{
//		if (arr->A[i] < arr2->A[j])
//		{
//			arr4->A[k++] = arr->A[i++];
//		}
//		else
//			arr4->A[k++] = arr2->A[j++];
//	}
//
//	for (; i < arr->length; i++)
//		arr4->A[k++] = arr->A[i];
//	for (; j < arr2->length; j++)
//		arr4->A[k++] = arr2->A[j];
//	
//	arr4->length = arr->length + arr2->length;
//	arr4->size = 20;
//
//	return arr4;
//}
//
//Array* Union(Array* A1, Array* A2)
//{
//	int i = 0, j = 0, k = 0;
//	Array* A3 = (Array*)malloc(sizeof(Array));
//
//	while (i < A1->length && j < A2->length)
//	{
//		if (A1->A[i] < A2->A[j])
//			A3->A[k++] = A1->A[i++];
//		else if (A1->A[i] > A2->A[j])
//			A3->A[k++] = A2->A[j++];
//		else
//		{
//			A3->A[k++] = A1->A[i++];
//			j++;
//		}
//	}
//
//	for (; i < A1->length; i++)
//		A3->A[k++] = A1->A[i];
//	for (; j < A2->length; j++)
//		A3->A[k++] = A2->A[j];
//
//	A3->length = k;
//	A3->size = 20;
//
//	return A3;
//}
//
//Array* Intersection(Array* A1, Array* A2)
//{
//	int i = 0, j = 0, k = 0;
//	Array* A3 = (Array*)malloc(sizeof(Array));
//
//	while (i < A1->length && j < A2->length)
//	{
//		if (A1->A[i] < A2->A[j])
//			i++;
//		else if (A1->A[i] > A2->A[j])
//			j++;
//		else if(A1->A[i] == A2->A[j])
//		{
//			A3->A[k++] = A1->A[i++];
//			j++;
//		}
//	}
//
//	A3->length = k;
//	A3->size = 20;
//
//	return A3;
//}
//Array* Difference(Array* A1, Array* A2)
//{
//	int i = 0, j = 0, k = 0;
//	Array* A3 = (Array*)malloc(sizeof(Array));
//
//	while (i < A1->length && j < A2->length)
//	{
//		if (A1->A[i] < A2->A[j])
//			A3->A[k++] = A1->A[i++];
//		else if (A1->A[i] > A2->A[j])
//			j++;
//		else
//		{
//			i++;
//			j++;
//		}
//	}
//	for (; i < A1->length; i++)
//		A3->A[k++] = A1->A[i];
//
//	A3->length = k;
//	A3->size = 20;
//
//	return A3;
//}
//int main()
//{
//	Array arr = { {2,4,33,45,86}, 15, 5 };
//	Array arr2 = { {12,22,34,54,55}, 20, 5 };
//	Array arr3 = { {5,-9,6,-1,-4,5,6,-3,7}, 20, 9 };
//
//	Array A1 = { {2,3,4,6,7,8,9},10,7 };
//	Array A2 = { {1,3,5,6,8,10,11},10,7 };
//	
//	//display(arr);
//	/*
//	append(&arr,10);
//	insert(&arr, 2, 15);
//	int x = del(&arr, 4);
//	cout << "the index value "<<x<<" is deleted" << endl;
//	linearsearch(&arr, 4);*/
//
//	//display(arr3);
//	/*int index = binarySearch(&arr2, 34);
//	int rec_index = recbinarySearch(arr2.A, arr2.length, 0, 34);*/
//	//printf("%c is the index", binarySearch(&arr2, 54));
//	/*cout << "Value was found at index "<<index;
//	cout << endl;
//	cout << "Through Recursion Value was found at index " << rec_index;*/
//
//	//display(arr);
//
//
//	/*printf("Get - %d \n", Get(arr2, 4));
//	printf("Set - %d \n", Set(&arr2, 3, 10));
//	display(arr2);
//	printf("Max - %d \n", Max(arr2));
//	printf("Min - %d \n", Min(arr2));
//	printf("Sum - %d \n", Sum(arr2));
//	printf("Avg - %d \n", Avg(arr2));*/
//
//	/*int a[5] = { 4,7,8,9,2 };
//	printf("%d", *a);*/
//
//	/*reverse1(&arr2);
//	cout << "reverse from auxilary array" << endl;
//	display(arr2);
//	reverse2(&arr2);
//	cout << "reverse from swap of elements" << endl;
//	display(arr2);*/
//
//	/*insertSort(&arr2, 60);
//	insertSort(&arr2, 40);
//	display(arr2);*/
//	
//	//isSorted(arr2);
//
//	/*reArrange(&arr3);
//	display(arr3);*/
//
//	//display(arr);
//	//display(arr2);
//	//Array* arr4;
//	//arr4 = mergeSortedArrays(&arr, &arr2);
//	//display(*arr4); // * bcos heap me banaya hai hamne ye array
//
//	Array* A3;
//	//A3 = Union(&A1, &A2);
//	//A3 = Intersection(&A1, &A2);
//	A3 = Difference(&A1, &A2);
//	display(*A3);
//
//	return 0;
//}