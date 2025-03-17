# PolyPyCpp

Made for fun script, that merges Python and C++ code into one file.

For example, the following code prints `Hello, Python!` when run with Python and `Hello, C++!` when run with C++.

```
#pragma/*
print("Hello, Python!")
#pragma*/
#include <iostream>
#define None int main() { std::cout << "Hello, C++!" << std::endl; }
None
```

### Build (Linux)

```
git clone https://github.com/ipazzxyz/PolyPyCpp.git
mkdir PolyPyCpp/build
cd PolyPyCpp/build
cmake ..
make
```

### Usage (Linux)

```
polypycpp <Python file> <C++ file> <Output file>
```
