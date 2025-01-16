[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=17745035)
# unit-4-6-assignment-b

## To compile code
All code must be compiled before you can run it.  To compile means that you are converting your C++ code into a language that the computer can understand (e.g., binary).  To compile C++ code, run the following command in a terminal:
```
g++ fileName.cpp -o outFileName
```
This tells the C++ compiler to compile your file named `fileName.cpp`, and output it (`-o`) as a file named `outFileName`.

## To run code
After you have compiled the code, run your output file by running
```
./outFileName
```

## Compile and Run Example
Suppose I have a file named `classwork.cpp`.  I compile and run the file by doing
```
g++ classwork.cpp -o output
./output
```

# Instructions
Do the following in the file named `homework.cpp`.
1. Create a procedure named `isPrime` that takes in one integer as parameter, and returns `true` if the number is prime, and `false` if the number is not prime.  Assume that the input is always greater than 0.
  * The number 1 is not prime, and should always return `false`
  * If a number `N` is divisible by a number less than `N` (except 1), then it is not prime
  * If a number `N` is not divisible by any number less than `N` (except 1), then it is prime

**Hint:** Start your loop at 2.

For practice, you can come up with the solution yourself.  If you get stuck, then have AI help you so that you can do problem 2.

**Sample Output**
```
isPrime(1) // returns false
isPrime(2) // returns true
isPrime(27) // returns false
isPrime(11) // returns true
```
2. Using the `isPrime` procedure you made in problem 1, create a procedure named `primeList` that takes in a positive integer as parameter, and returns a list of all the prime numbers less than or equal to the input number.  Have your procedure return a `std::vector<int>`, and use the `push_back()` procedure to add primes to your list.

**Sample Output**
```
primeList(11) // returns {2, 3, 5, 7, 11}
primeList(1) // returns {}
primeList(20) // returns {2, 3, 5, 7, 11, 13, 17, 19}
```

3. Create a procedure named `quadForm` that takes in three numbers as parameters - `a`, `b`, and `c`, and computes the quadratic formula for a quadratic of the form

$$ y = ax^2 + bx + c. $$

Return the two solutions in a list.  Have your procedure return a `std::vector<double>` and use the `push_back()` procedure to add the solutions to the list.  You may assume that the input `a` will never be 0.  For your reference, the two solutions are given by the following formula

$$ x = \frac{-b\pm\sqrt{b^2-4\cdot a\cdot c}}{(2\cdot a)}. $$

Use the `sqrt()` procedure for the square root.  Note that your program will crash if you get an imaginary number as an answer.

**Sample Outputs**
```
quadForm(1, -5, 6) // returns {2.0, 3.0}
quadForm(1, 9, 14) // returns {-7.0, -2.0}
```
4. Create a procedure named `averageList` that takes in a `std::vector<double>` as parameter, and returns the average of the elements of the list as a `double`.  Assume that the list always has at least one element in it.

**Sample Outputs**
```
std::vector<double> foo = {1, 2, 3, 4, 5};
averageList(foo); // returns 3.0
```
