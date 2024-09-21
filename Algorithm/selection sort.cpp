#include<iostream>
using namespace std;

int main()
{
    int a[50], num, i, m, pos, p;

    cout << "Enter the number of integers: ";
    cin >> num; 

    cout << "Enter Integers: ";
    for (i = 0; i < num; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < (num - 1); i++)
    {
        pos = i;
        for (m = i + 1; m < num; m++)
        {
            if (a[pos] > a[m])
            {
                pos = m;
            }
        }
        if (pos != i)
        {
            p = a[i];
            a[i] = a[pos];
            a[pos] = p;
        }
    }

    cout << "Sorted List In Ascending Order: ";
    for (i = 0; i < num; i++)
    {
        cout << a[i] << " "; 
    }

    return 0;
}