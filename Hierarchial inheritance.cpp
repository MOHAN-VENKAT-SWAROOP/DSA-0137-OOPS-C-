#include<iostream>
using namespace std;
class base
{
	public:
		void a()
		{
			cout << "a";
		}
};
class derived1:public base
{
	public:
		void b()
		{
			cout << "b";
		}
};
class derived2:public base
{
	public:
		void c()
		{
			cout << "c";
		}
};
class derived3:public base
{
	public:
		void d()
		{
			cout << "d";
		}
};
int main()
{
	derived1 o1;
	derived2 o2;
	derived3 o3;
	o1.a();
	o1.b();
	o2.a();
	o2.c();
	o3.a();
	o3.d();
	return 0;
}
