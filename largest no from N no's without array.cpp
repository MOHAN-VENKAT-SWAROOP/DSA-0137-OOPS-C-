#include <iostream>
using namespace std;
int main()
{
    int size, largestValue, currentValue;
    cout << "Enter size of elements:" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value to add : ";
        cin >> currentValue;

        if (i == 0 || currentValue > largestValue)
        {
            largestValue = currentValue;
        }
    }
    cout << "Largest value : " << largestValue << endl;
    return 0;
}
