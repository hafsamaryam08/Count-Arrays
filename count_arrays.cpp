#include <iostream>
#include <string>
#define ARRAY_SIZE 10
#define COUNT_SIZE 11
using namespace std;

void find_asterisk_count()
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

void find_digit_count()
{
    int count[COUNT_SIZE] = {0};
    int a[ARRAY_SIZE] = {1, 3, 3, 5, 5, 7, 7, 10, 4, 3};

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        count[a[i]]++;
    }

    cout << "Number\tOccurence" << endl;
    for (int i = 0; i < COUNT_SIZE; i++)
    {
        cout << i << "\t" << count[i] << endl; 
    }
}

void find_digits_count()
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

void find_words_count()
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

void find_duplicate_num()
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

void find_vowels_count()
{
    string st;
    cout << "Write a sentence >> ";
    getline(cin, st);
    cout << "Vowels\tCount" << endl;

    int count[100] = {0};
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
    for (int i = 0; i < 100; i++)
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

int main()
{
    find_asterisk_count();
    find_digit_count();
    find_digits_count();
    find_words_count();
    find_duplicate_num();
    find_vowels_count();
}
