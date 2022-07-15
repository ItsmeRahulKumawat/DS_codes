//#include<iostream>
//using namespace std;
//
//void insert(int A[], int n) {
//	int i = n;
//	int temp = A[i];
//
//	while (i > 1 && temp > A[i / 2]) {
//		A[i] = A[i / 2];
//		i = i / 2;
//	}
//	A[i] = temp;
//}
//
//int del(int A[], int n) {
//	int temp = 0;
//	int val = 0; 
//
//	val = A[1];
//	int x = A[n];
//	A[1] = A[n];
//	A[n] = val;
//
//	int i = 1;
//	int j = i * 2;
//
//	while (j < n - 1) {
//		if (A[j + 1] > A[j]) {
//			j = j + 1;
//		}
//		if (A[i] < A[j]) {
//			temp = A[i];
//			A[i] = A[j];
//			A[j] = temp;
//
//			i = j;
//			j = 2 * j;
//		}
//		else {
//			break;
//		}	
//	}
//	return val;
//}
//
//int main()
//{
//	int H[] = { 0,10,20,30,25,5,40,35 };
//	for (int i = 2; i <= 7; i++) {
//		insert(H, i);
//	}
//	cout << "Delete value is " << del(H, 7) << endl;
//	for (int i = 1; i <= 7; i++) {
//		cout << H[i] << " ";
//	}
//
//	return 0;
//}