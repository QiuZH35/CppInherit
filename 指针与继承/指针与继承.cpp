
#define _CRT_SECURE_NO_WARNINGS 
#include  <iostream>
using namespace std;

class myclass
{
public:
	int i = 10;
	void show()
	{
		cout << "myclass i "<<i  << endl;
	}


};
class mynewclass :public myclass
{
public:
	int i = 100;
	void show()
	{
		cout << "mynewclass i " << i << endl;

	}

};

//����ָ�룬�����������ָ�룬�������û����
//����ָ�룬�������û���⣬�����ø��ࣩ������ʵ���칹���ݽṹ
//����ָ�룬������󣬱������߶�ȡ��������
int main()
{
	myclass *p1 = new myclass;
	myclass *p2 = new mynewclass;//����ָ����Դ�������ַ���칹���ݽṹ
	mynewclass *p3 = new mynewclass;
	mynewclass *p4 =reinterpret_cast<mynewclass *> ( new myclass);//����ָ�룬�������

	p1->show();
	p2->show();
	p3->show();
	p4->show();

	return 0;
}