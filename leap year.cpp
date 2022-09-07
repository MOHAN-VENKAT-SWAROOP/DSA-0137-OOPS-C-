#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter the year:";
	cin>> a;
	if(a%4==0)
	{
		cout << a<<"is a leap year";
	}
	else
	{
		cout << a << "is a non leap year";
	}
	return 0;
}
