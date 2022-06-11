/*
#include<iostream>
using namespace std;
// using loop normal
int fib(int n)
{
	int t0 = 0, t1 = 1, s = 0;

	if (n <= 1)
		return n;
	for (int i = 2; i <= n; i++)
	{
		s = t0 + t1;
		t0 = t1;
		t1 = s;
	}
	return s;
}
// using recursion
int rfib(int n)
{
	if (n <= 1)
		return n;
	return rfib(n-2)+rfib(n-1);

}
int main()
{
	cout<<rfib(10);
	return 0;
}
*/