module;

#include <iostream>

export module X.B;

import <memory>;

namespace X
{

class Impl  // not exported!
{
public:
    Impl()
    {
        std::cout << "X::Impl::Impl() of module X.B called.\n";
    }
    ~Impl()
    {
        std::cout << "X::Impl::~Impl() of module X.B called.\n";
    }
};


export class B
{
    std::unique_ptr<Impl> rep;

public:
    B()
        : rep{ std::make_unique<Impl>() }
    {
    }

    ~B()
    {
    }
};

}
