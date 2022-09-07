#include<iostream>
using namespace std;
int main()
{
	int a,i;
	int factorial;
	cout << "Enter the interger:";
	cin>> a;
	if(a==0)
	{
		cout << "factorial of"<<0 <<": 1";
	}
	else
	{
		for(i=1;i<=a;i++)
		{
			factorial *= i;
		}
		cout << "factorial :"<<factorial;
	}
	return 0;
}
