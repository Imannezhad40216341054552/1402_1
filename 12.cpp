#include <iostream>
using namespace std;

int main()
{
    int x,y ,z , max;
    cout << " Enter your numbers ";
    cin >> x >> y >> z;
    max = x;
    if (y > max)
        max = y;
    if (z > max)
        max = z;
    cout << " The max is " << max << endl;
    return 0;
}
