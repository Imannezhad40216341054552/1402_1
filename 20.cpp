#include <iostream>
using namespace std;

int main()
{
    int x, y, p, f, t;
    cin >> x >> y;
    f = x;
    p = y;
    do
    {
        t = x % y;
        x = y;
        y = t;
    } while (t != 0);
     cout << "B.M.M=" << x << endl;
     cout << "K.M.M=" << (p * f) / x;
   return 0;
}
