#include <iostream>
//Sorting An Array in Ascending Order
using namespace std;
int main()
{
    int a;
    int array[18], temp=0;
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
        for (int j = i + 1; i < a; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "ASCENDING--------------------" << endl;
    for (int i = 0; i < a; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}