#include <iostream>
using namespace std;
int main()
{
   int a[100], n, i, max, min, maxPos, minPos;
   cout<<"Enter array size [1-100]:";
   cin>>n;
   maxPos=minPos=0;
   cout<<"Enter array elements:\n ";
   cin>>a[0];
   max=min=a[0];
   for(i=1; i<n; i++)
   {
      cin>>a[i];
      if(max<a[i])
      {
         max=a[i];
         maxPos=i;
      }
      if(min>a[i])
      {
         min=a[i];
         minPos=i;
      }
   }

   cout<<"Largest element is" << max<< " at "<< maxPos<<" position.\n";
   cout<<"Smallest element is "<<min<<" at "<< minPos<< " position.";
   return 0;
}
