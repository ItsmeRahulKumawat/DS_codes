//#include <iostream>
//using namespace std;
//
//void swap(char* a, char* b)
//{
//	char temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void perm(char s[] , int l , int h)
//{
//	if (l == h)
//	{
//		cout << s << endl;
//	}
//	else
//	{
//		for (int i = 0; i <= h; i++)
//		{
//			swap(&s[i], &s[l]);
//			perm(s, l + 1, h);
//			swap(&s[i], &s[l]);
//		}
//	}
//}
//int main()
//{
//	char s[] = "ABC";
//	perm(s, 0, 2);
//	return 0;
//}