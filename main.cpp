#include <iostream>
using namespace std;
int main()
{
    int i,total;
    total = 0;
    for (i=0; i<10; i++)
        total += i;
    if (total != 45)
        cout << "Failure!" << endl;
    else
        cout << "Success!" << endl;
    return 0;
}
