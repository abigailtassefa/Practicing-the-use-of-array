Program: Sum of List Values

Overview

This C++ program allows the user to:

1. Input a list of integer values.
2. Display all the entered values.
3. Calculate and display the sum of those values.

It uses dynamic memory allocation so that the list size can be determined at runtime.

---

Features

* Uses dynamic memory allocation (`new` and `delete[]`).
* Accepts user input for any number of integers.
* Calculates the sum of all entered values.
* Displays both the list and the total sum.



How It Works

1. The program asks the user for the number of values (`n`).
2. It dynamically allocates an integer array (`pop`) of size `n`.
3. The `accept()` function prompts the user to enter each integer value.
4. The `displayValues()` function prints all the entered numbers.
5. The `calculateSum()` function computes the total.
6. The `displaySum()` function prints the result.
7. Memory is freed with `delete[] pop` at the end of the program.



Example Run
```
enter the number of values you want to enter in your list: 4
enter values for the list:
Value Number 0 : 10
Value Number 1 : 20
Value Number 2 : 30
Value Number 3 : 40
The list values are: 10, 20, 30, 40,
the sum of the values in the list is: 100

```
Function Descriptions

accept function:  Prompts the user to input `n` integer values and stores them in the array `pop`.
displayValues function: Displays all integers in the list.    
calculateSum function: Calculates and returns the total sum of all integers.       
displaySum function: Displays the computed total sum.                                                 

    

Memory Management

The program allocates memory dynamically with:

```cpp
int *pop = new int[n];
```

After use, it properly deallocates memory with:

```cpp
delete[] pop;
```


Requirements

- Compiler: Any standard C++ compiler (e.g.Visual Studio).
- C++ Standard: C++11 or later.



Author: Abigail Tarekegn Assefa

