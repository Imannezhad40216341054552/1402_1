#include <iostream>
using namespace std;

int main()
{
    int i, j, x, n;
      cout << "Enter n:";
    cin >> n;
    for (i = 0; i <= 32767; i++)
    {
        j = i;
        x = 0;
        while (j > 0)
        {
            x = x + j % 10;
            j /= 10;
        }
        if (x == n)
        {
              cout << i;
            break;
        }
    }
    return 0;
}
