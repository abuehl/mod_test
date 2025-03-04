# mod_test

This small C++ 20 project using C++ modules demonstrates a compiler
error present in:

    Microsoft (R) C/C++ Optimizing Compiler Version 19.42.34438 for x64

The console output of the program is (example):

	Inside f():
	X::Impl::Impl() of module X.A called. id_ is 42
	X::Impl::Impl() of module X.B called.

	Cleanup of f():
	X::Impl::~Impl() of module X.A called. id_ is 1551069797
	X::Impl::~Impl() of module X.A called. id_ is 42

During the cleanup of function `f`, the wrong destructor ist called. The program
calls the destructor of `Impl` of Module `X.A` twice, instead of once. It calls the 
destructor of class `Impl` from the wrong module.

There are two distinct classes both named `Impl` in module `X.A` and module `X.B`. These
classes are **not** exported, so they should be local to the modules (module linkage).

The project was created with Microsoft Visual Studio Community 2022 (64-bit)
Version 17.12.5. Open the file `mod_test.sln`.
