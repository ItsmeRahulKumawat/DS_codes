//#include<iostream>
//using namespace std;
//
//void insertionSort(int A[], int n) {
//	int j;
//	for (int i = 1; i < n; i++) { //bcos ham ek border bana ke chalenge to 1 1 element badte jayega to i
//		j = i - 1;
//		int x = A[i];
//		while (j > -1 && A[j] > x) {
//			A[j + 1] = A[j];
//			j--;
//		}
//		A[j + 1] = x;
//	}
//}
//
//int main()
//{
//	int A[] = { 8,5,7,3,2 };
//	int n = sizeof(A) / sizeof(A[0]);
//	insertionSort(A, n);
//
//	for (int i = 0; i < n; i++) {
//		cout << A[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}