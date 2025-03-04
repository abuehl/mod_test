module X.A;

namespace X
{

A::A()
    : impl{ std::make_unique<Impl>(42) }
{
}


A::~A()
{
}

}
