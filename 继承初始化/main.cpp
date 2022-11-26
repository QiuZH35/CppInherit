
#define _CRT_SECURE_NO_WARNINGS 

#include "coder.h"
#include "cppcoder.h"
#include "cocoscoder.h"

//子类依赖于父类，继承过程中，总是先构造父类，其次到派生类。
//继承后先析构最后一级派生类，然后再逐步到父类。
void test1()
{
	cppcoder haihua;
}

void test2()
{
	cocoscoder liuhaihua;
}

int main()
{
	test1();

	cout << "\n\n\n" << endl;

	test2();
	return 0;
}