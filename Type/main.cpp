#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    int data[] = {2, 5, 8};
    int mat[3][2] = {{1,5}, {4,3}, {0,2}};

    // cout << typeid(data).name() << endl;
    // cout << typeid(&data).name() << endl;
    // cout << typeid(data[0]).name() << endl;
    // cout << typeid(*data).name() << endl;
    cout << typeid(mat).name() << endl;
    cout << typeid(&mat).name() << endl;
    cout << typeid(*mat).name() << endl;
    cout << typeid(**mat).name() << endl;
    return 0;
}