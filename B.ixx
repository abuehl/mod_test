module;

#include <iostream>

export module X.B;

import <memory>;

namespace X
{

class Impl
{
public:
    Impl()
    {
        std::cout << "X::Impl::Impl() of module B called.\n";
    }
    ~Impl()
    {
        std::cout << "X::Impl::~Impl() of module B called.\n";
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
