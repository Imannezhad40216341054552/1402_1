#include <iostream>
using namespace std;

int main()
{
    int k, a, b, c, d;
    for (k = 1000; k <= 9999; k++)
    {
        a = k % 10;         // yekan
        b = (k / 10) % 10;  // dahgan
        c = (k / 100) % 10; // sadgan
        d = k / 1000;       // hezargan
        if ((a == d) && (b == c))
            cout << k << endl;
    }
    
}
