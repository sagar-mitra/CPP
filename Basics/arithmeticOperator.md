# Arithmetic Operators in C++

Arithmetic operators are used to perform basic mathematical operations. These include:

| Operator | Name             | Description                              |
|----------|------------------|------------------------------------------|
| `+`      | Addition          | Adds two operands                        |
| `-`      | Subtraction       | Subtracts the second operand from the first |
| `*`      | Multiplication    | Multiplies two operands                  |
| `/`      | Division          | Divides numerator by denominator         |
| `%`      | Modulus           | Returns remainder of division            |
| `++`     | Increment         | Increases integer value by 1             |
| `--`     | Decrement         | Decreases integer value by 1             |

---

## Important Notes

- **Division (`/`) of integers** truncates the decimal part. Use floats if you want the full result.
  
  ```cpp
  float x = 10, y = 3;
  cout << "x / y = " << x / y;  // Output: 3.33333
  ```

- **Modulus (`%`)** only works with integers in C++. For floats, you'll need `fmod()` from `<cmath>`.

  ```cpp
  #include <cmath>
  cout << fmod(10.5, 3.2);  // Example for float modulus
  ```

---

## Unary vs Binary Operators

- **Unary**: `++`, `--` (operate on one operand)
- **Binary**: `+`, `-`, `*`, `/`, `%` (operate on two operands)

---

## Compound Assignment Operators

These combine arithmetic with assignment. Useful for cleaner code.

| Operator | Example  | Equivalent to   |
|----------|----------|-----------------|
| `+=`     | `a += b` | `a = a + b`     |
| `-=`     | `a -= b` | `a = a - b`     |
| `*=`     | `a *= b` | `a = a * b`     |
| `/=`     | `a /= b` | `a = a / b`     |
| `%=`     | `a %= b` | `a = a % b`     |

---

## Math Functions

Use `<cmath>` for extended arithmetic operations like:

- `pow(a, b)` – Power (a raised to the power of b)
- `sqrt(a)` – Square root of a
- `abs(a)` – Absolute (positive) value of a
- `ceil(a)` – Rounds a *up* to the nearest integer
- `floor(a)` – Rounds a *down* to the nearest integer
- `round(a)` – Rounds a to the nearest whole number

---

# C/C++ Operator Precedence and Associativity

Operators higher in the table have higher precedence and are evaluated before operators lower in the table.

| Precedence Level | Operators                             | Description                                       | Associativity    |
|------------------|----------------------------------------|---------------------------------------------------|------------------|
| 1                | `()` `[]` `.` `->`                    | Function call, array subscript, member access     | Left to Right    |
| 2                | `++` `--` `+` `-` `!` `~` `sizeof`     | Unary operators, logical/bitwise NOT, size        | Right to Left    |
| 3                | `*` `/` `%`                            | Multiplication, Division, Modulus                 | Left to Right    |
| 4                | `+` `-`                                | Addition, Subtraction                             | Left to Right    |
| 5                | `<<` `>>`                              | Bitwise shift left/right                          | Left to Right    |
| 6                | `<` `<=` `>` `>=`                      | Relational operators                              | Left to Right    |
| 7                | `==` `!=`                              | Equality, Inequality                              | Left to Right    |
| 8                | `&`                                    | Bitwise AND                                       | Left to Right    |
| 9                | `^`                                    | Bitwise XOR                                       | Left to Right    |
| 10               | `|`                                    | Bitwise OR                                        | Left to Right    |
| 11               | `&&`                                   | Logical AND                                       | Left to Right    |
| 12               | `||`                                   | Logical OR                                        | Left to Right    |
| 13               | `?:`                                   | Ternary conditional                               | Right to Left    |
| 14               | `=` `+=` `-=` `*=` `/=` `%=` etc.     | Assignment and compound assignment                | Right to Left    |
| 15               | `,`                                    | Comma operator                                    | Left to Right    |



---

## Important

when using modulus operator (%), if the dividend is less than the divisor then it returns the dividend
