#include <iostream>
#include <string>
#define ARRAY_SIZE 10
#define COUNT_SIZE 11
using namespace std;

int main()
{
    int count[COUNT_SIZE] = {0};
    int a[ARRAY_SIZE] = {1,3,3,5,5,7,7,10,4,3};

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        count[a[i]]++;
    }

    cout << "Number\tOccurence\tAsterisk" << endl;
    for (int i = 0; i < COUNT_SIZE; i++)
    {
        cout << i << "\t" << count[i]<< "\t\t";
        for (int j = 1; j <= count[i]; j++)
        {
            cout << "*"; 
        } 
        cout << endl;
    }
}