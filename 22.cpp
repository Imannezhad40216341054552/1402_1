#include <iostream>
using namespace std;
// arry is 50
int main()
{
    int i, mahdi[50];
    for (i = 0; i < 50; i++)
        cin >> mahdi[i];
    for (i = 0; i < 50; i += 3)
        cout << mahdi[i];
  return 0;
}
