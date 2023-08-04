#include <stdio.h>

int main(void)
{
  int x, y;
  
  printf("Enter a value to x: ");
  scanf("%d", &x);
  printf("Enter a value to y: ");
  scanf("%d", &y);

  if (x > y) {
    printf("X is grater than Y\n");
  } else if (x < y) {
    printf("x is less then Y\n");
  } else {
    printf("x is equal to y\n");
  }
  return 0;
}

/*
The `&` symbol is used in C to pass the address of a variable to the `scanf` function when reading input. In C, when you want to read data into a variable using `scanf`, you must provide the memory address where the input data should be stored.

Let me explain it in more detail:

1. `scanf` requires pointers: The `scanf` function requires the memory address of the variable where it should store the input. It means you need to pass a pointer to the variable. A pointer is a special type of variable that stores the memory address of another variable.

2. Using `&` to get the address: The `&` (address-of) operator in C is used to get the memory address of a variable. When you write `&num1` or `&num2`, you are getting the address of the variables `num1` and `num2`, respectively.

3. Correct parameter passing: By using `&` with `num1` and `num2`, you are providing the correct pointers to the `scanf` function, allowing it to write the user input directly to the memory locations associated with `num1` and `num2`.

Here's an example to illustrate this concept:

```c
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("You entered: %d and %d\n", num1, num2);

    return 0;
}
```

Without using `&`, `scanf` would not be able to store the input correctly in the variables `num1` and `num2`, as it would not know where to write the data. Using `&` ensures that `scanf` knows the memory location where the input data should be stored.
*/