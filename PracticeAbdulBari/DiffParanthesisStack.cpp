//#include<iostream>
//#include<string>
//using namespace std;
//
//class stack {
//private:
//	char data;
//	int top;
//	char* sarr;
//public:
//	stack() {
//		top = -1;
//		sarr = new char[5];
//	}
//	void push(char d);
//	void pop(int asci);
//	int checkPara(string s);
//};
//void stack::push(char d) {
//	top++;
//	sarr[top] = d;
//}
//void stack::pop(int asci) {
//	int val = sarr[top];
//	if (asci == val+1 || asci ==val+2)
//	{
//		sarr[top] = ' ';
//		top--;
//	}
//}
//int stack::checkPara(string s) {
//	if (s[0] == ')') {
//		return 0;
//	}
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
//			push(s[i]);
//		else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
//			pop(s[i]);
//		}
//	}
//	if (top == -1)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	stack s1;
//	string s;
//	cout << "Enter a expression" << endl;
//	cin >> s;
//	int ans = s1.checkPara(s);
//	if (ans == 1)
//		cout << "Yes its expression" << endl;
//	else
//		cout << "No its not expression" << endl;
//
//	return 0;
//}