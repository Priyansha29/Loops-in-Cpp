# Loops-in-C++

Aim :
-> To understand the working of different looping constructs in C++ and implement them through practical programs such as printing messages, validating user input, generating patterns, and working with numbers.\

Tools Required:
Programiz c++ compiler

# Theory
-> Loops in C++ are used to execute a set of statements repeatedly as long as a specific condition is true. They reduce redundancy in code and are widely used for iteration, pattern printing, and data processing.

## Types of Loops in C++ 

1)For Loop
a)Used when the number of iterations is already known.

b)Performs initialization, condition checking, and update in a single line.

c)The condition is checked before each iteration.
Syntax:

for(initialization; condition; increment) {
    // body of loop
}

2)While Loop
a)Preferred when the number of iterations is not known beforehand.

b)The condition is evaluated before the loop body runs.

c)If the condition is false initially, the loop body will not execute even once.

Synatx:

while(condition) {
    // body of loop
}

3)Do-While Loop
a)Ensures the loop body executes at least once.

b)The condition is checked after executing the loop body.

c)Useful when the first execution must happen without a condition check.

Syntax:

do {
    // body of loop
} while(condition);


## Program 1 – Printing "SIT" 5 Times
Aim: Print the text “SIT” five times using a for loop.

*Algorithm:*
1)Initialize a loop counter at 1.
2)Repeat printing until the counter reaches 5.
```Sample output: 

SIT
SIT
SIT
SIT
SIT```

## Program 2 – Display Even Numbers Between 0–10
Aim: Generate even numbers using loop-controlled increments.

*Algorithm:*
1)Start with i = 0.
2)Print i and increase it by 2 until it reaches 10.

Sample Output: 

0
2
4
6
8
10

## Program 3 – Validating password from user by while loop
Aim: Validate a user password using a while loop and provide multiple retry options.

*Algorithm:*
1)Take PRN and password as input.
2)Prompt user to enter the password.
3)If incorrect, display menu options to retry, reset, or exit.

## Program 4 – Printing Digits of a Number in Reverse
Aim: Extract and display digits in reverse order using modulus and division.

*Algorithm:*
1)Input a number.
2)Repeat until number becomes 0:
3)lastDigit = number % 10
4)print lastDigit
5)number = number / 10

## Program 5 – Demonstrating Nested Loops
Aim: Show how outer and inner loops interact.

*Algorithm:*
1)Outer loop runs twice.
2)Inner loop runs three times per outer iteration.

Sample output: 
Outer: 1
Inner: 1
Inner: 2
Inner: 3
Outer: 2
Inner: 1
Inner: 2
Inner: 3

## Program 6 – Left-Aligned Triangle Pattern
Aim: Print a triangular pattern of stars aligned to the left.

Sample output:
*
**
***
****
*****

## Program 7 – Right-Aligned Triangle Pattern
Aim: Combine spaces and stars to print a right-aligned pattern.

Sample Output:
    *
   **
  ***
 ****
*****

## Program 8 – Floyd’s Triangle
Aim: Print numbers in a triangular format using nested loops.

Sample output:
1
2 3
4 5 6
7 8 9 10

## Program 9 – Hourglass Star Pattern
Aim: Print a symmetric hourglass pattern using two loops.

Sample output:

* * * * *
 * * * *
  * * *
   * *
    *
   * *
  * * *
 * * * *
* * * * *


# Conclusion
->By implementing these programs, we observed how different loop structures can be applied to real-world logic such as authentication systems, number processing, and pattern generation. Loops enhance code reusability, reduce redundancy, and provide better control over program flow.





