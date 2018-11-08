# aud-exercises-ws18
Solutions developed with students during exercises for the course Algorithmen und Datenstrukturen in winter term 2018/19.

## Setup and running instructions:

1. Obtain a C-compiler of your choice; I use the Gnu Compiler Collection (gcc).
2. Open a shell and navigate to the directory where the source file is located (using `cd`). You want to use tab-completion! 
3. Compile the program `name.c` by running 
`gcc -ansi -Wall -Wextra -Wpedantic name.c`. 
This will create an executable with the name `a.out`. The compiler flags enforce syntactic restrictions that are very close to the description of C in the official lecture material.
4. To run `a.out` from a unix-like system, type `./a.out`.
5. Alternatively, you may add `-o exename` to create an executable named `exename`. It can be run by typing `./exename`.


## Fundamentals of `C`:

### Variable declaration

`int a;` or `char b[80]` 

Here `int` and `char` are types whereas `a` and `b` are names of the declared variables. The `[80]` indicates that instead of a single `char` an array of `char`s of size 80 is created. For each value we want to read or manipulate, we have to create a variable of an appropriate type. Often temporary/auxiliary variables are needed to carry out a comuptation.

Assignment to a variable is with `=`, e.g., `a = 5`.

### Reading and writing

We print text or the content of some variable to the screen with the `printf` function. The first argument of `printf` is a *format string* that contains normal symbols and special symbol sequences starting with `%` where the content of some variable shall be printed. The symbols folling the `%` indicate for instance the type of the printed value. All other arguments of `printf` are variables (or values) that shall be printed. E.g.:
- `printf("Hello!")` just outputs `Hello!`. 
- `printf("%d + %d = %d", 2, 3, 5)` outputs `2 + 3 = 5`. The *i*th occurrence of `%d` (`d` for decimal) is replaced by the *i+1*th argument of `printf`. 
- For new lines include `\n` into the format string.
- Other types: `%s` for strings (arrays of characters), `%f` for floating point values.

Reading in text works similarly with the `scanf` function. The first argument of `scanf` is just a special sequence indicating the type of the value to be read. The second argument is the address of a variable to which the value we read should be stored. E.g.: 
- `scanf("%d", &i)` reads a decimal number and stores it in variable `i`.
- `scanf("%d", &s)` reads a string of characters and stores it in variable `s`.

### Control structures

#### if then (else)
If we want to execute a statement (or a sequence of statements) only if a certain condition is satisfied, we can use the if-then-else statement. In `C` is has the following form:

```
if (condition)
  statement1;
else
  statement2;
```

#### while loop
If we want to repeat some statements multiple times, we can use a while-loop. As long as a particular condition is satisfied, the statements in the body of the loop are executed again and again. It is possible to exit the loop early by executing the `break` statement in the body. Also, we can jump back to the head (where the condition is checked) of the loop without executing the remainder of the body by executing `continue`. E.g.:

```
while (condition) {
  statement1;
  statement2;
  if (condition2) break;
  statement3;
  if (condition3) continue;
  statement5;
}
```

#### for loop
The for loop adds some syntactic sugar to while loops. Very often, a certain counting variable is incremented or decremented at the end of the body of a loop. Also, this counting variable needs to be initialized before the loop begins. To write this in a way that is compact and easy to read, we use a for loop:
``` 
for( initialize; condition; execute_after_each_iteration )
    statements_in_body;
```
For instance, we can have:
```
for( x = 0 ; x < 10; x = x + 1 )
    statement;
```
Note that both the `initialize` and the `execute_after` part can be empty.
