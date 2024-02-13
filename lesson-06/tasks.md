### 1. Preprocessor directives
In this assignment, you use some of the preprocessor directives that you learned earlier.

In your program do the following:
1. Declare a character constant `MODE` with an integer value.
2. Check that the constant is defined, otherwise the program should not compile and should display a message telling you to define `MODE`.
3. If `MODE` is `0`, display `“Working in training mode”` to the console.
4. If `MODE` is `1`, define an `add` function that adds two numbers. Print `"Working in combat mode"` to the console, ask the user to enter two numbers and print the result of the addition using the `add` function to the console.
5. If `MODE` is any other value, print `“Unknown mode. Completion of work."`

Note that the `add` function should **only** be defined if `MODE` is `1`.

### 2. Marcos SUB
In this task you will create a simple macros.

Your task is to define a `SUB` macros that should subtract numbers from each other and be used like this:

```C++
int main (int argc, char** argv)
{
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
}
```
