#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size of array:" << endl;
    cin >> size;
    int *arr = new int(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number : ";
        cin >> *(arr + i);
    }
    int largestValue = *arr;
    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) > largestValue)
        {
            largestValue = *(arr + i);
        }
    }
    cout << "Largest value in array : " << largestValue << endl;
    return 0;
}
