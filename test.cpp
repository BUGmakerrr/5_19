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
//	// �������ɳ�ʼ���б��Ƕ���ĳ�Ա�����Ķ���ĵط�
//	B(int a, int ref)
//		:_aobj(a)
//		,_ref(ref)
//		, _n(10)
//	{
//		_x = 10;
//	}
//private:
//	A _aobj;	  // û��Ĭ�Ϲ��캯��(���ô��ξͿ��Ե����Ǹ����캯��)
//	int& _ref;	  // ����
//	const int _n; // const 
//	// ��Ա����������
//
//	int _x;
//};