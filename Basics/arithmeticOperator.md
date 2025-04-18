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

## Important

when using modulus operator (%), if the dividend is less than the divisor then it returns the dividend
