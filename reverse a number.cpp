#include<iostream>
using namespace std;
int main()
{
	int number,reverse=0;
	cout<<"enter the number to reverse=";
	cin>>number;
	while(number!=0)
	{
		reverse=reverse*10;
		reverse=reverse+number%10;
		number=number/10;
	}
	cout<<reverse;
	return 0;
}
