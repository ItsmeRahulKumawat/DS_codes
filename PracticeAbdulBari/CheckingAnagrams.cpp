//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char A[] = "medical";
//	char B[] = "decimal";
//	int H[30] = {0};
//	int c = 0;
//	if (size(A) != size(B))
//	{
//		cout << "A and B are not Anagrams" << endl;
//	}
//	else {
//		for (int i = 0; A[i] != '\0'; i++)
//		{
//			H[A[i] - 97]++;
//		}
//		for (int i = 0; B[i] != '\0'; i++)
//		{
//			H[B[i] - 97]--;
//			if (H[B[i]-97] < 0)
//			{
//				cout << "A and B are not Anagrams" << endl;
//				goto exit;
//			}
//		}
//		for (int i = 0; i < size(H); i++)
//		{
//			if (H[i] == 0)
//			{
//				c++;
//			}
//		}
//	}
//	if (c == size(H))
//		cout << "A and B are Anagrams" << endl;
//	else
//		cout << "A and B are not Anagrams" << endl;
// exit:
//	return 0;
//}