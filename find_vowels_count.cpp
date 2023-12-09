#include <iostream>
#include <string>
using namespace std;

int main()
{
    string st;
    cout << "Write a sentence >> ";
    getline(cin, st);
    cout << "Vowels\tCount" << endl;

    int count[200] = {0};
    for (int i = 0; st[i]!='\0'; i++)
    {
        if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u' ||
            st[i] == 'A' || st[i] == 'E' || st[i] == 'I' || st[i] == 'O' || st[i] == 'U')
        {
            int charASCII = (int) st[i];
            count[charASCII]++;
        }
    }

    int total = 0;
    for (int i = 0; i < 200; i++)
    {
        if (count[i]>0)
        {
            char ch = (char) i;
            cout << ch << "\t" << count[i] << endl;
            total += count[i];
        }
    }
    cout << "Total:  " << total << endl;
}