
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;

class A
{

};
class B :A
{

};
int main1()
{
	//空类一个字节
	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;

	return  0;
}
class C
{
	int a;
};
class D :public C
{
	int b;
};
class E :public D
{
	int x;
};
class F :public D, public E
{
	int x;
};
int main2()
{
	cout << sizeof(C) << endl;//4
	cout << sizeof(D) << endl;//8
	cout << sizeof(E) << endl;//12
	cout << sizeof(F) << endl;//24
	return 0;
}