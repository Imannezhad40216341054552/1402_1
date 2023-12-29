#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x, j, i;
    for (i = 1; i < 10; i++)
    {
        cout << setw(10 - i);
        for (j = 1; j <= i; j++)
            cout << j;
        for (x = i; x >= 1; x--)
            cout << x;
            cout << endl;
    }
 return 0;
}
