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
class derived2:public derived1
{
	public:
		void c()
		{
			cout << "c";
		}
};
int main()
{
	derived2 o;
	o.a();
	o.b();
	o.c();
	return 0;
}
