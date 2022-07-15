//#include<iostream>
//#include<array>
//#include<algorithm>
//using namespace std;
//
//void bubbelSort(int A[], int n) {
//	int flag;
//	for (int i = 0; i < n - 1; i++) {
//		flag = 0;
//		for(int j = 0; j < n - i - 1; j++) {
//			if (A[j] > A[j + 1]) {
//				swap(A[j], A[j + 1]);
//				flag = 1;
//			}
//		}
//		if (flag == 0) {
//			cout << "Array is already Sorted" << endl;
//			break;//iska matlab vo ek bhi value change nai kia to fir sab sorted he hai to break karenge
//		}
//	}
//}
//
//int main()
//{
//	int A[] = { 1,2,3,4,5,6 };
//	int B[] = { 5,4,3,2,1 };
//	int asize = sizeof(A) / sizeof(A[0]);
//	int bsize = sizeof(B) / sizeof(B[0]);
//
//	bubbelSort(A, asize);
//	for (int i = 0; i < asize; i++) {
//		cout << A[i] << " ";
//	}
//	cout << endl;
//
//	bubbelSort(B, bsize);
//	for (int i = 0; i < bsize; i++) {
//		cout << B[i] << " ";
//	}
//	cout << endl;
//
//	return 0;
//}