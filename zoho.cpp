#include <bits/stdc++.h>

using namespace std;
 
void pattern(int n)
{    int m=1;
    int k = 2 * n - 2;
    for (int i = 0; i < n; i++)
	{
        for (int j = 0; j < k; j++)
        {
            cout << " ";
        }
		k = k - 2;
        for (int j = 0; j <= i; j++)
		{
            cout <<m;
            m++;
        }
        cout << endl;
    }
}
int main()
{
    int n = 5;
    pattern(n);
    return 0;
}
