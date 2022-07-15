//#include<iostream>
//using namespace std;
//
//int partition(int A[], int l,int h) {
//	int pivot = A[l];
//	int i = l,j = h;
//	do {
//		do {
//			i++;
//		} while (A[i] <= pivot); //that means it will stop when the bigger value is found 
//		do {
//			j--;
//		} while (A[j] > pivot); //that means it will stop when smaller value is found
//
//		if (i < j) {
//			swap(A[i], A[j]);
//		}
//	} while (i < j);
//	swap(A[l],A[j]);
//
//	return j;//middle elemenet or new middle partiion pivot
//}
//
//void Quicksort(int A[], int l, int h) {
//	int j;
//	if (l < h) { //check if there are atleat 2 elements in the list
//		j = partition(A, l, h);
//		Quicksort(A, l, j); // leftside of pivot isme bhi agar 2 part hua to uska bhi left side recursive ke through hoga 
//		Quicksort(A, j + 1, h); // j+1 matlab j hai pivot to j+1 aage vvala list ka low vo hoga this is right side of pivot
//	}
//}
//
//int main()
//{
//	int A[] = { 11,13,7,2,9,12, INT32_MAX };// int max for the infinity number to know the loop ke usko kaha rukna hai 
//	int n = sizeof(A) / sizeof(A[0]);
//	Quicksort(A, 0, n-1);
//
//	for (int i = 0; i < n-1; i++) {
//		cout << A[i] << " ";
//	}
//	cout << endl;
//
//	return 0;
//}