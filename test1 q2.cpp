#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout << "Enter the integer for multiplication table:";
	cin >> n;
	for(i=1;i<=10;i++)
	{
		cout << n<<"x"<<i<<"="<<n*i<<endl;
	}
	return 0;
}

