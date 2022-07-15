//#include<iostream>
//using namespace std;
//
//int findMax(int A[], int n) {
//	int max = 0;
//	for (int i = 0; i < n; i++) {
//		if (A[i] > max) {
//			max = A[i];
//		}
//	}
//	return max;
//}
//
//void countSort(int A[], int n) {
//
//	int max = findMax(A, n);
//
//	int* c = new int[max + 1]; //max+1 bcos array 0 se start hota hai to 15 ki jagah array 14 tak jayega
//
//	for (int i = 0; i <= max; i++) {
//		c[i] = 0; //init with 0 all elements
//	}
//
//	for (int i = 0; i < n; i++) {
//		c[A[i]]++; //count dega c array me 
//	}
//	int j = 0; int i = 0;
//	while (j < max + 1) {
//		if (c[j] > 0) {
//			A[i++] = j;
//			c[j]--; //ek dalne ke bad decrement karega ye 
//		}
//		else
//			j++;
//	}
//}
//
//int main()
//{
//	int A[] = {15,6,5,7,3,3,3,2,2,15,1};
//
//	int n = sizeof(A) / sizeof(A[0]);
//
//	countSort(A, n);
//
//	for (int i = 0; i < n; i++) {
//		cout << A[i] << " ";
//	}
//	return 0;
//}