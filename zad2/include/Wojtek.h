#ifndef WOJTEK_H
#define WOJTEK_H
#include <iostream>
using namespace std;

class Wojtek
{
    public:
        Wojtek();
        void fun2() {
            cout << "hello wojtek" << endl;
        }
        virtual ~Wojtek();

    protected:

    private:
};

#endif // WOJTEK_H
