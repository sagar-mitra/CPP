# C++ Conditionals

Conditionals in C++ are used to execute certain blocks of code based on given conditions.

---

We already know that C++ supports the usual logical conditions from mathematics:

- **Less than:** `a < b`
- **Less than or equal to:** `a <= b`
- **Greater than:** `a > b`
- **Greater than or equal to:** `a >= b`
- **Equal to:** `a == b`
- **Not equal to:** `a != b`

We can use these conditions to perform different actions for different decisions.

---

### C++ has the following conditional statements:

- **Use `if`** to specify a block of code to be executed if a specified condition is true.
- **Use `else`** to specify a block of code to be executed if the same condition is false.
- **Use `else if`** to specify a new condition to test if the first condition is false.
- **Use `switch`** to specify many alternative blocks of code to be executed.

---

## The if Statement
Use the `if` statement to specify a block of C++ code to be executed if a condition is `true`.

### Syntax
```
if (condition) {
  // block of code to be executed if the condition is true
}
```

---
## The else Statement
Use the `else` statement to specify a block of code to be executed if the condition is `false`.

### Syntax
```
if (condition) {
  // block of code to be executed if the condition is true
} else {
  // block of code to be executed if the condition is false
}
```

---

## The else if Statement
Use the `else if` statement to specify a new condition if the first condition is `false`.

### Syntax
```
if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}
```

---

## Ternary Operator

There is also a short-hand if else, which is known as the ternary operator because it consists of three operands.

### Syntax
```
variable = (condition) ? expressionTrue : expressionFalse;
```