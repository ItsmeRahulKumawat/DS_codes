
/*
#include <iostream>
using namespace std;

int main()
{
	//2D array in Stack
	int A[3][4] = { {1,2,3,4}, {2,4,6,8}, {1,3,5,7} };


	// 2D array from stack pointer to head storage
	int* B[3];
	B[0] = new int[4];
	B[1] = new int[4];
	B[2] = new int[4];

	

	// 2D array in Heap
	int **C;
	C = new int*[3];
	C[0] = new int[4];
	C[1] = new int[4];
	C[2] = new int[4];

	cout << "Insert" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> C[i][j];
		}
		cout << endl;
	}

	// Printing 2D arrays
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

*/