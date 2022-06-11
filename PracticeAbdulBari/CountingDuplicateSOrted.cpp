//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[10] = {3,6,8,8,10,10,15,15,15,15};
//	int lastDuplicate = arr[0];
//
//	for (int i = 0; i < size(arr); i++)
//	{
//		if (arr[i] == arr[i + 1] && arr[i]!=lastDuplicate)
//		{
//			cout << arr[i] << " is duplicate" << endl;
//			lastDuplicate = arr[i];
//		}
//	}
//	int j = 0;
//	for (int i = 0; i < size(arr) - 1; i++)
//	{
//		if (arr[i] == arr[i + 1])
//		{
//			j = i + 1;
//			while (arr[j] == arr[i])
//			{
//				j++;
//			}
//			cout << arr[i] << " is appearing "<< j-i <<" times" << endl;
//			i = j - 1;
//		}
//	}
//	return 0;
//}