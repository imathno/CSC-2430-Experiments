#include "test.h"

#include <iostream>

using namespace std;

int main()
{
    Dummy d;
    cout << d.GetVal() << endl;
    d.ChangeVal(d, 488);
    cout << d.GetVal() << endl;
}