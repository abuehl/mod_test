module;

#include <iostream>

export module X.A;

import <memory>;

namespace X
{

class Impl  // not exported!
{
    int id_;

public:
    Impl(int id) : id_{ id }
    {
        std::cout
            << "X::Impl::Impl() of module X.A called. id_ is "
            << id_ << std::endl;
    }
    ~Impl()
    {
        std::cout 
            << "X::Impl::~Impl() of module X.A called. id_ is " 
            << id_ << std::endl;
    }
};


export class A
{
    std::unique_ptr<Impl> impl;

public:
    A();
    ~A();
};

}
