#include<iostream>
using namespace std;
class Degree
{
	public:
	void getDegree()
	{
		cout << " I got a degree"<<endl;
	}
};
class Undergraduate: public Degree
{
	public:
	void printdegree()
	{
		cout << "I am an undergraduate"<<endl;
	}
};
class Postgraduate: public Degree
{
	public:
	void printdegree()
	{
		cout << "I am postgraduate"<<endl;
	}
};
int main()
{

	Undergraduate obj1;
	Postgraduate obj2;
	obj1.getDegree();
	obj1.printdegree();
	obj2.getDegree();
	obj2.printdegree();
	return 0;
}

