#include<bits/stdc++.h>
using namespace std;
 
long long n, x, a[100005];
 
bool cmp(long long a, long long b)
{
    return a > b;
}
 
int main()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    sort(a, a + n, cmp);
 
    long long sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        cnt++;
        if (sum >= x)
        {
            break;
        }
    }
 
    if (sum >= x)
    {
        cout << cnt << endl;
    }
    else
    {
        cout << "Shombhob na" << endl;
    }
 
    return 0;
}