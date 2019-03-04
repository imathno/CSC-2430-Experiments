#include <iostream>

using namespace std;

struct Point {
    double x, y;
};

int main()
{
    cout << "Size of Point struct: " << sizeof(Point) << endl;
    cout << "Size of Point struct pointer: " << sizeof(Point*) << endl;

    return 0;
}