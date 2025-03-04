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

During the cleanup of function f, the wrong destructor ist called. The program
calls the destructor of Impl of Module A twice, instead of once. It calls the 
destructor of class Impl from the wrong module.

There are to distinct classes both named "Impl" in module A and module B. These
classes are **not** exported, so they should be local to the modules (module linkage).
