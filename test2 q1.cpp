#include<iostream>
using namespace std;
class Base1
{
	public:
		void a()
		{
			cout << "a";
		}
};
class Derived1:public Base1
{

	public:
		void b()
		{
			cout << "b";
		}
};

class Base2
{
	public:
		void c()
		{
			cout << "c";
		}
};

class Derived2 : public Base1, public Base2
{
	public:
		void d()
		{
			cout << "d";
		}
};
int main()
{
	Derived1 o1;
	Derived2 o2;
	o1.a();
	o1.b();
	o2.a();
	o2.c();
	o2.d();
	return 0;
	
}
