//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int A[10] = {1,2,4,5,6,8,9,10,12,14};
//	int k = 10;
//	
//	//using while bcos we dont want to change the position of j every time
//	int i = 0;
//	int j = size(A) - 1;
//
//	while (i < j)
//	{
//		if (A[i] + A[j] == k)
//		{
//			cout << A[i] << " + " << A[j] << " = " << k << endl;
//			i++;
//			j--;
//		}
//		else if (A[i] + A[j] > k)
//			j--;
//		else
//			i++;
//	}
//	return 0;
//}