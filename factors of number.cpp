#include <iostream>
using namespace std;
static void printDivisors(int n) 
{
  cout<<"Divisors of "<<n<<" are: ";
  for(int i = 1; i <= n; i++) 
  {
    if(n%i == 0)
      cout<<i<<" ";
  }
  cout<<"\n";
}

int main(){
  printDivisors(6);
  printDivisors(8);
  printDivisors(10);
  return 0;
}
