# C++ Error: delete used on stack allocated memory

This repository demonstrates a common C++ error: using the `delete` operator on a pointer that points to stack-allocated memory.  The `delete` operator is only intended for deallocating memory that was dynamically allocated using `new`.  Attempting to use `delete` on stack-allocated memory leads to undefined behavior.

## Bug Description
The provided code snippet demonstrates incorrect usage of the `delete` operator. The integer variable `x` is allocated on the stack, and the pointer `ptr` points to its address.  However, the code attempts to deallocate `ptr` using `delete`. This is incorrect. 

## Solution
The solution removes the line that attempts to `delete ptr`.  Variables declared on the stack are automatically deallocated when the function returns.