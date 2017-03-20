#include <iostream>
#include <Wojtek.h>
#include <Pacia.h>
using namespace std;

int main()
{
    Wojtek *wojtek = new Wojtek();
    Pacia *pacia = new Pacia();
    cout << "Hello world!" << endl;

    (*wojtek).main2();

    (*pacia).fun1();
    return 0;
}
