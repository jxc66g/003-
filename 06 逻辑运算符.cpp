#include<iostream>

using namespace std;


int main6() {

	//逻辑运算符 非 ！
	//int a = 10;

	//在C++中, 除了0都为真
	//cout << !a << endl; //0

	//cout << !!a << endl; //1


	//逻辑运算符 - 与 &&
	int a = 10;
	int b = 10;
	cout << (a && b) << endl;

	a = 0;
	b = 10;
	cout << (a && b) << endl;

	a = 0;
	b = 0;
	cout << (a && b) << endl;

	//同真为真，其余为假

	//逻辑运算符  或 ||
	//同假为假，其余为真
	system("pause");
	return 0;
}