//#include<iostream>
//using namespace std;
//
//void merge(int A[], int l, int mid, int h) {
//	int i = l, j = mid + 1, k = l;
//	int B[100] = {0}; // temp array 
//
//	while (i <= mid && j <= h) {
//		if (A[i] < A[j]) {
//			B[k++] = A[i++];
//		}
//		else {
//			B[k++] = A[j++];
//		}
//	}
//	for (; i <= mid; i++)
//		B[k++] = A[i];
//	for (; j <= h; j++)
//		B[k++] = A[j];
//
//	for (int i = l; i <= h; i++) {
//		A[i] = B[i];
//	}
//}
//
//void MergeSortIterative(int A[], int n) {
//	int p, l, h, mid;
//	for (p = 2; p <= n; p = p * 2) {
//		for (int i = 0; i + p - 1 < n; i = i + p) {
//			l = i;
//			h = i + p - 1;
//			mid = (l + h) / 2;
//			merge(A, l, mid, h);
//		}
//	}
//	if (p / 2 < n) {
//		merge(A, 0, p / 2 - 1, n - 1);
//	}
//}
//
//void MergeSortRecursive(int A[], int l, int h) {
//	int mid;
//	if (l < h) { //means atleast 2 elements are present then
//		mid = (l + h) / 2; // ye bar bar isko divide karke 1 single element ka list tak leke ayega
//		MergeSortRecursive(A, l, mid); //l se leke mid tak aadha list
//		MergeSortRecursive(A, mid + 1, h); // mid + 1 se leke h tak matlab second list
//		merge(A, l, mid, h); //jo 2 list nikla hai sorted ye merge karega vo dono ko
//	}
//}
//int main()
//{
//	int A[] = { 11,13,7,12,16,8,4,5 };
//	
//	int n = sizeof(A) / sizeof(A[0]);
//	//MergeSortIterative(A, n);
//	//MergeSortRecursive(A, 0, n-1);
//	for (int i = 0; i < 8; i++) {
//		cout << A[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}