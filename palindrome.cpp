#include<iostream>
#include<iostream>
using namespace std;
int main()
{
int num, reverse_num = 0, temp_num;
cout << "Enter input:"; 
cin >> num;
temp_num = num;
while (num != 0)
{
reverse_num = reverse_num * 10;
reverse_num= reverse_num + num% 10;
num = num / 10;
}
if(temp_num == reverse_num)
{
cout << " it is a palindrome"; 
}
else
{
cout << "it is not a palindrome";
}
return 0;
}
