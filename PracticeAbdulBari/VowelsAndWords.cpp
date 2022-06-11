//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char c[] = "How are you brother";
//	char cons[10] = {0};
//	char vow[10] = {0};
//
//	int vowels = 0;
//	int consonents = 0;
//
//	int k = 0;
//	int p = 0;
//	// checking vowels in the array of chars
//	for (int i = 0; c[i] != '\0'; i++)
//	{
//		if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' || c[i] == 'A' ||
//			c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U')
//		{
//			vow[k] = c[i];
//			vowels++;
//			k++;
//		}
//		else if ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z'))
//		{
//			cons[p] = c[i];
//			consonents++;
//			p++;
//		}
//	}
//
//	cout << "count of vowels is " << vowels << endl;
//	cout << "words were vowels are " << vow << endl;
//	cout << "count of consonents is " << consonents << endl;
//	cout << "words were consonents are " << cons << endl;
//
//	return 0;
//}