#include <iostream>
using namespace std;
/*
class Base
{
public:
	int Bar(char x)
	{
		return (int)(x);
	}
	virtual int Bar(int x)
	{
		return (2 * x);
	}
};

class Derived : public Base
{
public:
	int Bar(char x)
	{
		return (int)(-x);
	}
	int Bar(int x)
	{
		return (x / 2);
	}
};
*/

//class Test
//{
//	int m_a;
//public:
//	Test()
//	{
//
//	}
//	~Test();
//};
//Test::~Test()
//{
//	delete this;
//	this = NULL;//this指针不能为左值，因为this指针是一个常量指针，不能更改指针的指向
//}
//void func(const int & v1, const int & v2)
//{
//	cout << v1 << ' ';
//	cout << v2 << ' ';
//}
int t3(int argc,char * argv[])
{
	/*int i = 0;
	func(i, i++);*/
	



	/*
	Derived obj;
	Base * pobj = &obj;
	cout << pobj->Bar((char)(100)) << endl;
	//父类指针指向子类的对象，所以这个时候父类的对象可以调用自己的成员函数
	cout << pobj->Bar(100) << endl;
	//子类的Bar函数加上了virtual变成了虚函数，所以子类对应的函数被重写
	//这里需要注意的就是，重写的话函数必须完全相同，但是隐藏的话只要函数名相同就可以
	*/


	return 0;
}