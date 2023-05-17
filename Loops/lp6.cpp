#include <iostream>
//Sorting An Array in Descending Order
using namespace std;
int main()
{
    int a;
    int array[1000], temp;
    cout << "Array Size:";
    cin >> a;
    cout << "Enter Array Elements:" << endl;
    for (int i = 0; i < a; i++)
    {
        cout << i + 1 << "th Element Of The Array:";
        cin >> array[i];
    }
    cout << "ARRAY BEFORE SORTING-----------------" << endl;
    for (int i = 0; i < a; i++)
    {
        cout << array[i];
    }
    cout << endl;
    for (int i = 0; i < a; i++)
    {
        if (array[i] < array[i + 1])
        {
            temp = array[i + 1];
            array[i + 1] = array[i];
            array[i] = temp;
        }
    }
    cout << "DESCENDING--------------------" << endl;
    for (int i = 0; i < a; i++)
    {
        cout << array[i];
    }
    cout << endl;
    return 0;
}