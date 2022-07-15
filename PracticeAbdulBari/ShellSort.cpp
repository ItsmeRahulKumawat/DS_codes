//#include<iostream>
//using namespace std;
//
//void ShellSort(int A[], int n) {
//	int j, gap, i, temp;
//	for (gap = n / 2; gap >= 1; gap = gap / 2) {
//		for (i = gap; i < n; i++) {
//			temp = A[i];
//			j = i - gap; // for first i = 4 and gap = 4 so j =0th element 
//			while (j >= 0 && A[j] > temp) {
//				A[j + gap] = A[j];//ye dono basically
//				j = j - gap; //swapping kar rahe hai lekin idhr j ka val piche piche jara hai bcos piche vale element bhi check karne hia na wit same gap
//			}
//			A[j + gap] = temp;
//		}
//	}
//}
//
//int main(){
//	int A[] = {11,13,2,5,6,12,7,4,14};
//	int n = sizeof(A) / sizeof(A[0]);
//	
//	ShellSort(A, n);
//	for (int i = 0; i < n; i++) {
//		cout << A[i] << " ";
//	}
//	return 0;
//}