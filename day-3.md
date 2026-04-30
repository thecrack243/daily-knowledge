# Day 03

Today I learned about constructors, destructors, and copy constructors in C++.

## What I learned

### Constructor
- A constructor is a special function that is called when an object is created.
- It is used to initialize variables.
- It has the same name as the class.

Example:
```cpp
class Test {
public:
    int x;
    Test(int val) {
        x = val;
    }
};
