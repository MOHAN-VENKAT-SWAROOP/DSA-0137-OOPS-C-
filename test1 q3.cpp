#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout << "Enter a positive number:";
	cin >> n;
	for(int i=1;i<=10;i++)
	{
		sum+=i;
	}
	cout << "sum of" << n << "natural numbers:"<<sum;
	return 0;
}
