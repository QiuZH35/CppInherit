
#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
using namespace std;

//����ľ�̬�����������еĸ�������������������ͳ��һ������Ķ������
//�ࣨ���࣬���ࣩ��ֱ�ӷ��ʣ������������࣬���ࣩ����


//��̬���������У�����������Լ���������󶼿��Է���
//��̬������˽�У�������ڲ����Է��ʣ���Ҫ�趨�����ӿڣ�get set
//��̬������������������Լ�����������ڲ����Է��ʣ��ⲿ�����趨�ӿ�
//��̬�����Ľӿڣ�ԭ���趨Ϊ��̬����������thisָ�룬��������һ������

class myclass
{
public:
	static int num;//��̬����������������
	myclass()
	{
		num += 1;
	}
	~myclass()
	{
		num -= 1;
	}
};
int myclass::num = 0;//��̬����

class mynewclass :public myclass
{

};

int main()
{
	myclass my1, my2;
	mynewclass mynew1, mynew2;
	cout << sizeof(myclass) << endl;//1
	cout << sizeof(mynewclass) << endl;//1
	cout << myclass::num << endl;
	cout << mynewclass::num << endl;
	cout << my1.num << endl;
	cout << mynew1.num << endl;

	return 0;
}