#include "hash.h"
#include <ctime>

int main()
{
    htb test1;
    srand(static_cast<unsigned int>(time(0)));
    test1.hashValue(23);

    test1.hashValue(23);
    test1.hashValue(12);
    for (int i = 0; i < 1000; i++)
    {
        test1.hashValue(rand() % 1000);
    }
    test1.outHashValue();
}