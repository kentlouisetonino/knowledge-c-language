## $\textnormal{Pointers to Structures}$

> - Just like pointers to variables, pointers to structures can also be defined.

```c
// Example 1.
// Defines a pointer to the myStruct structure.
struct myStruct *struct_ptr;

// Example 2.
// Stores the address of the structure variable struct_var in the pointer struct_ptr;
struct_ptr = &struct_var;

// Example 3.
// Accesses the value of the structure member struct_mem.
struct_ptr -> struct_mem;
```
