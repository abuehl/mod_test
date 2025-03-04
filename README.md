# mod_test

This small C++ 20 project using C++ modules demonstrates a compiler
error present in:

    Microsoft (R) C/C++ Optimizing Compiler Version 19.42.34438 for x64

The console output of the program is (example):

    Inside f():
    X::Impl::Impl() of module A called. id_ is 42
    X::Impl::Impl() of module B called.

    Cleanup of f():
    X::Impl::~Impl() of module A called. id_ is -1360854704
    X::Impl::~Impl() of module A called. id_ is 42
