//#include<iostream>
//using namespace std;
//
//int selectionSort(int A[], int n) {
//	int k,j; int cnt = 0;
//	for (int i = 0; i < n - 1; i++) {
//		for (j = k = i; j < n; j++) 
//		{
//			if (A[j] < A[k]) 
//				k = j;
//		}
//		if (k != i) {
//			swap(A[i], A[k]);
//			cnt++;
//		}
//	}
//	return cnt;
//}
//
//int main()
//{
//	int A[] = { 8,3,4,5,2 };
//	int n = sizeof(A) / sizeof(A[0]);
//	int count = selectionSort(A, n);
//	cout << endl << "count is " << count << endl;
//
//	for (int i = 0; i < n; i++) {
//		cout << A[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}