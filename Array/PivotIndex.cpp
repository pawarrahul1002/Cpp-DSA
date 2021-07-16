#include <iostream>
using namespace std;
//pivot index

int main()
{
    int sum_l = 0;
    int sum_r = 0;
    int ans = -1;
    int s;
    cin >> s;

    //s= 6;
    //int a[6] = {1,7,3,6,5,6};
    int a[s];
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < s; i++)
    {
        sum_r += a[i];
    }

    for (int p = 1; p < s - 1; p++)
    {
        sum_l += a[p - 1];
        sum_r -= a[p];

        if (sum_r == sum_l)
        {
            ans = p;
        }
    }

    if (ans == -1)
    {
        cout << "pivot not found" << endl;
    }
    else
    {
        cout << "pivot index is : " << ans << endl;
    }

    return 0;
}
