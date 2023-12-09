#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, count = 0;
    string st;
    
    cout << "Write a sentence >> ";
    getline(cin, st);
    for (i = 0; st[i] != '\0'; i++)
    {
        if (st[i] == ' ')
        {
            count++;
        }
    }

    cout << "There are " << count + 1 << " words in this sentence.";
}