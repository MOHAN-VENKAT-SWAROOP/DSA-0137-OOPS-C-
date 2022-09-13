#include<iostream>
using namespace std;
int main()
{
    int number,originalnumber,sum=0;
    int digit;
    cout<<"Enter a number:";
    cin>>originalnumber;
    number=originalnumber;
    while(number!=0)
    {
        digit=number%10;
        sum=sum+digit;
        number=number/10;
    }
    if(originalnumber%sum==0)
    {
    	cout<<"HARSHAD NUMBER";
	}
    else
    {
    	cout<<"NOT A HARSHAD NUMBER";
	}
    return 0;
}
