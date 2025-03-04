
#include <iostream>

import X.A;
import X.B;

void f()
{
    std::cout << "Inside f():\n";
    X::A a;
    X::B b;
    std::cout << "\nCleanup of f():\n";
}

int main()
{
    f();
}
