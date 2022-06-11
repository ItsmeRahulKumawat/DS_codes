//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char A[] = "finding";
//	long int H = 0, x = 0;
//	/*cout << sizeof(int) << endl;*/
//	for (int i = 0; A[i] != '\0'; i++)
//	{
//		x = 1; // |0|0|0|0|0|0|0|1| In bit 
//		x = x << (A[i] - 97); // left shift so every element wil shift one pos left
//				// 102 - 97 = position of char
//		if ((x & H) > 0)
//		{
//			printf("%c is duplicate \n", A[i]);
//		}
//		else
//			H = x | H;
//	}
//	return 0;
//}