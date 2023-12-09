#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a[11] = {2,2,3,77,0,2,3,0,0,1,99};
    int count[100] = {0};
    int current_num;

    for (int i = 0; i < 100; i++)
        cout << count[i] << " ";

    cout << "\n==========\n";
    for (int i = 0; i < 11; i++)
    {
        current_num = a[i];
        count[current_num]++;
    }

    for (int i = 0; i < 100; i++)
        cout << count[i] << " ";

    cout << "\n==========\n";
    for (int i = 0; i < 100; i++)
    {  
        if (count[i] > 0)
        {
            cout << i << ": " << count[i] << " counts" << endl;
        } 
    }
}