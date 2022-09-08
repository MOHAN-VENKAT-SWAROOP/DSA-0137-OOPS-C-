#include<iostream>
using namespace std;
class Area
{
	public:
		 void output(int l, int b)
		{
			cout << "Area of rectangle is ="<<l*b<<endl;
			
		}
		 void output(int a)
		{
			cout << "Area of square is ="<<a*a<<endl;
			
		}
};
int main()
{
	Area obj;
	obj.output(6,5);
	obj.output(5);
	return 0;
}
