
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;

class myclass
{
public:
	int x = 10;
	void go1()
	{

	}
private:
	int y = 20;
	void go2()
	{

	}
protected:
	int z = 30;
	void go3()
	{

	}
};
class mynewclass :public myclass
{
public:
	void show()
	{
		go1();
		//go2();error ˽��
		go3();
		cout << z << endl;
	}

};
class mynewclass1 :public mynewclass
{
public:
	void test()
	{
		go1();
		//go2();error
		go3();
	}
};
//���м̳У�˽���޷����ʣ����г�Ա��Ȼ���У�������Ա��Ȼ���������ڲ����ԣ��ⲿ�����ԣ�

//�ɴ���ʽ�̳У�public protected

//˽��ʽ�̳У�private�����У�����������˽�С� �������

//�����̳У�protected ��

//�������ַ�ʽ�̳У������඼�޷�ֱ��ʹ�û����˽�г�Ա��
int main1()
{
	mynewclass mynew1;
	cout << mynew1.x << endl;
	mynew1.show();
	mynewclass1 my1;
	my1.go1();

	return 0;
}