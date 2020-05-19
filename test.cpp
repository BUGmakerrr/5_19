#include <iostream>
using namespace std;

class C{
public:
	C(int c=2)
		: _c(c)
	{}
private:
	int _c;
};
class D{
public:
	D(int c, int ref)
		: _cobj()
		, _ref(ref)
		, _n(10)
	{
		_x = 10;
	}
	void Print(){
		cout << _ref <<" "<< (_n) <<" "<< endl;
	}
private:
	C _cobj;
	int& _ref;
	const int _n;
	int _x;

};
int main(){
	D d(1, 0);
	d.Print();
	getchar();
	return 0;


}
//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{}
//private:
//	int _a;
//};
//
//class B
//{
//public:
//	// 可以理解成初始化列表是对象的成员变量的定义的地方
//	B(int a, int ref)
//		:_aobj(a)
//		,_ref(ref)
//		, _n(10)
//	{
//		_x = 10;
//	}
//private:
//	A _aobj;	  // 没有默认构造函数(不用传参就可以调的那个构造函数)
//	int& _ref;	  // 引用
//	const int _n; // const 
//	// 成员变量的声明
//
//	int _x;
//};