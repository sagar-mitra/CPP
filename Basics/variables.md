# 📘 C++ Variables

In C++, **variables** are used to store data that can be manipulated throughout the program. A variable represents a memory location that holds a value. This document provides a comprehensive overview of C++ variables, including syntax, data types, naming rules, and examples.

---

## 🧠 What is a Variable?

A **variable** is a named memory location that holds a value. The value can be changed during the program's execution. Each variable is associated with a **data type**, which determines the kind of data it can hold (such as integers, floating-point numbers, or characters).

---

## 📝 Declaring Variables

The syntax for declaring a variable is:

```cpp
data_type variable_name = value;
```
## 📊 Common Data Types in C++ 

Here are the common data types used in C++ to store different kinds of data:

| Data Type | Example                     | Description                              |
|-----------|-----------------------------|------------------------------------------|
| `int`     | `int x = 10;`               | Stores integer values (whole numbers)    |
| `float`   | `float y = 3.14;`           | Stores floating-point values (decimal)   |
| `double`  | `double z = 5.6789;`        | Stores double-precision floating-point values |
| `char`    | `char ch = 'A';`            | Stores a single character               |
| `bool`    | `bool flag = true;`         | Stores boolean values (true/false)      |
| `string`  | `string name = "John";`     | Stores a sequence of characters (requires `#include <string>`) |


## 🔐 Rules for Naming Variables
### When naming a variable, there are a few important rules:

Start with a letter or underscore: A variable name must begin with either a letter (a-z, A-Z) or an underscore (_).

Can contain letters, digits, and underscores: The rest of the name can consist of letters, digits (0-9), or underscores (_).

Case-sensitive: C++ is case-sensitive, so age and Age are treated as different variables.

Cannot be a reserved keyword: Avoid using C++ keywords like int, return, class, etc.

No spaces: You cannot use spaces in variable names. Use underscores if needed (e.g., my_variable).

