# To compile
```
g++ -o HelloWorld HelloWorld.cpp
```

# To run
```
./HelloWorld
```

# Get started
## Debugging feature for program
**For GCC/G++**

Add `-g` flag to the compile command line to add debugging feature
## Disable compiler extension
**Best practice:** Disable compiler extensions to ensure programs remain compliant with C++ standards and will work on any system

**For GCC/G++**

Disable compiler extension by adding `-pedantic-errors` flag to the compile command line
## Configure compiler warning level
**Best practice**: While learning, turning warning levels higher can help identify potential issues

**For GCC/G++**

Add the following flags to the compile command line: `-Wall -Weffc -Wextra -Wsign-conversion`

To treat all warnings as errors, add this flag: `-Werror`
## Choosing a language standard
**For GCC/G++**

Pass the compiler flags `-std=c++11`, `-std=c++14`, `-std=c++17`, or `-std=c++2a` to enable C++11/14/17/2a (20) support respectively
