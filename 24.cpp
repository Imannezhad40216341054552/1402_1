#include <iostream>
using namespace std;
// by array
int main()
{
    int i, sum = 0, a[10];
    for (i = 0; i <= 9; i++ )
    {
         cin >> a[i];
        sum = sum + a[i];
    }
     cout << "sum:" << sum << endl;
     cout << "average:" << sum / 10;
  return 0;
}
