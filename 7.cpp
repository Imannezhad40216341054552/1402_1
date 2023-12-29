#include <iostream>
using namespace std;

int main()
{
    int k, m;
    for (k = 5; k >= 1; k--)
    {
        for (m = 1; m <= k; m++)
            cout << m;
        cout << endl;
    }
    return 0;
}
