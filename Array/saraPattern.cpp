#include <iostream>
using namespace std;

int main()
{
    int n, x, count = 0;
    cin >> x;
    cin >> n;
    int num = 0;
    for (int i = 1, j = 1; i <= n && j <= n; i++, j++)
    {
        // for (int j = 1; j <= n; j++)
        // {
        cout << i * j << " ";
        // if ((i * j) == x)
        // {
        //     count++;
        // }
        // }
        // cout << endl;
    }
    // cout << count << endl;

    return 0;
}