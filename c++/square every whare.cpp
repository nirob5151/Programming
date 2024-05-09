#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int n, T[100000];
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> T[j];
        }
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (sqrt(T[j]) != (int)sqrt(T[j])) 
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}