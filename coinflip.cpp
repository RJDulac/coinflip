#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    //sets the rand() pseudo-random generator seed
    srand(time(NULL));
    int coin = rand() % 2;

    if (coin == 0)
    {
        cout << "Heads!\n";
    }
    else
    {
        cout << "Tails!\n";
    }
}