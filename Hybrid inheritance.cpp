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
class derived3:public derived1,public derived2
{
	public:
		void d()
		{
			cout << "d";
		}
};
int main()
{
	derived3 o;
	o.b();	
	o.c();	
	o.d();
	return 0;
}
