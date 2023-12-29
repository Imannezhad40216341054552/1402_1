#include <iostream>
using namespace std;

int main()
{
    int i, iman[100];
    for (i = 0; i <= 99; i++)
          cin >> iman[i];
    for (i = 0; i <= 99; i++)
        if (iman[i] == i)
          cout << iman[i] << " ";
   return 0;
}
