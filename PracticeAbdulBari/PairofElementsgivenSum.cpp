//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[8] = { 4,5,6,9,1,2,8,7 };
//	int k = 10;
//
//	// using i and j vairable with two loops so O(n^2) is TC
//	for (int i = 0; i < size(arr) - 1; i++)
//	{
//		for (int j = i + 1; j < size(arr); j++)
//		{
//			if (arr[i] + arr[j] == k)
//			{
//				cout << arr[i] << " + " << arr[j] << " = " << k << endl;
//			}
//		}
//	}
//	// Using hashtable method for the same
//	int H[11] = {0};
//	for (int i = 0; i < size(arr); i++)
//	{
//		if (H[k - arr[i]] != 0)
//		{
//			cout << arr[i] << " + " << k - arr[i] << " = " << k << endl;
//		}
//		H[arr[i]]++;
//	}
//	return 0;
//}