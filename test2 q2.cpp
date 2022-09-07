#include <iostream>
using namespace std;

class A
{

public:
	float area;
	
   A (double r)
	{
		area = 3.14 * r*r ;
	}
	
	A  (float a, float b)
	{
		area = 0.5* a * b;
	}
	A (int d)
	{
		area = d * d;
	}
	
	void disp()
	{
		cout<< area<< endl;
	}
};

int main()
{
	A o3(5.4);
	o3.disp();
	A o2 (6.5,6.6);
	o2.disp();
	A o1(5);
	o1.disp();
	return 0;
}

