#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout << "Enter first integer:";
	cin >> a;
    cout << "Enter second integer:";
	cin >> b;
	cout << "Enter third integer:";
	cin >> c;
	cout << "Enter fourth integer:";
	cin >> d;	
	if(a>b && a>c && a>d)
	{
		cout << a<<" is greater";
	}
	else if (b>a && b>c && b>d)
	{
		cout << b<<" is greater";
	}
	else if (c>a && c>b && c>d)
	{
		cout << c<<" is greater";
	}
	else
	{
		cout << d<<" is greater";
	}
	return 0;
}
