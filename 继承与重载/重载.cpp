
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

class point
{
public:
	int x=5;
	int y=5;
	void operator ++()
	{
		x++;
		y++;
	}
};
class huipoint :public point
{
public :
	int z = 10;
	void operator ++()
	{
		x++;
		y++;
		z++;
	}
};
int main1()
{
	//û�и��ǵ�����£����������Ҳ���Լ̳�
	//���า�Ǹ��࣬hui1.point::operator++();����
	huipoint hui1;
	cout << hui1.x << hui1.y << hui1.z << endl;
	++hui1;
	cout << hui1.x << hui1.y << hui1.z << endl;

	hui1.point::operator++();//hui1.point:: ֻ�ܵ��ö����Ա���Ա����
	cout << hui1.x << hui1.y << hui1.z << endl;
	return 0;
}