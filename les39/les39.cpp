#include <iostream>
using namespace std;

int hapy(unsigned int num)
{
    return ((num / 100000) + ((num / 10000) % 10) + ((num / 1000) % 10)) == (((num / 100) % 10) + ((num / 10) % 10) + (num % 10));
}

int main()
{
    int out = hapy(135432);
    if (out == 1)
        cout << "happy" << endl;
     if (out == 0)
        cout << "not happy" << endl;
}