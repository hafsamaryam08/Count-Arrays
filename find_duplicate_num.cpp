#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size, i;

    cout << "Enter size of array: ";
    cin >> size;

    int a[size];
    cout << "Enter " << size << " digits array: ";
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    int count[100] = {0}; 
    cout << "Number\tOccurence" << endl;
    for (i = 0; i < size; i++)
    {
        count[a[i]]++;
    }

    for (int i = 0; i < 100; i++) 
    {
        if (count[i] == 2) 
        {
            cout << i << "\t" << count[i] << endl;
        }
    }
}