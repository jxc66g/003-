#include<iostream>

using namespace std;


int main6() {

	//�߼������ �� ��
	//int a = 10;

	//��C++��, ����0��Ϊ��
	//cout << !a << endl; //0

	//cout << !!a << endl; //1


	//�߼������ - �� &&
	int a = 10;
	int b = 10;
	cout << (a && b) << endl;

	a = 0;
	b = 10;
	cout << (a && b) << endl;

	a = 0;
	b = 0;
	cout << (a && b) << endl;

	//ͬ��Ϊ�棬����Ϊ��

	//�߼������  �� ||
	//ͬ��Ϊ�٣�����Ϊ��
	system("pause");
	return 0;
}