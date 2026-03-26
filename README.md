# Codeforces
Codeforces solutions :D

## CPC - Primeros Pasos
<details>
  <summary>A. Hello, CPC!</summary>
  
  time limit per test1 second
  memory limit per test256 megabytes
Your task is to write a program that prints exactly the phrase Hello, CPC! to the standard output.

Input
This problem has no input.

Output
Print a single line with the phrase Hello, CPC!.

Example
Input
 
Output
Hello, CPC!
</details>

<details>
  <summary>B. Basic Operations</summary>
  
  time limit per test1 second
memory limit per test256 megabytes
Consider two integers a
 and b
. Your task is to compute and print the results of seven different arithmetic operations between them in a specific order.

For example, if a=10
 and b=4
, the operations would yield:

Sum: 10+4=14
Subtraction: 10−4=6
Floor division∗
: ⌊104⌋=2
Modulo (remainder)†
: 10mod4=2
Multiplication: 10×4=40
Floating-point division (with exactly 6
 digits after the decimal point): 10/4=2.500000
Ceiling division‡
: ⌈104⌉=3
∗
The floor function gives the greatest integer less than or equal to its argument (e.g., ⌊3.14⌋=3
, ⌊−3.2⌋=−4
).

†
nmodm
 (for integer n
 and m
) is defined as n−⌊nm⌋⋅m
.

‡
The ceiling function gives the least integer greater than or equal to its argument (e.g., ⌈3.14⌉=4
, ⌈−3.2⌉=−3
).

Input
The only input line contains two integers a
 and b
 (|a|,|b|≤2⋅109
, b≠0
), separated by a space.

Output
Print exactly seven lines, each containing the result of one operation in the specified order.

Scoring
Subtask 1
 (30
 points): 1≤a,b≤2⋅104
Subtask 2
 (30
 points): |a|,|b|≤2⋅104
, b≠0
Subtask 3
 (40
 points): No additional constraints.
For each subtask, points will be awarded based on the correctness of the following operations:

Sum correct: 10%
 of the subtask's points.
Subtraction correct: 10%
 of the subtask's points.
Floor division correct: 10%
 of the subtask's points.
Modulo (remainder) correct: 15%
 of the subtask's points.
Multiplication correct: 10%
 of the subtask's points.
Floating-point division correct: 20%
 of the subtask's points.
Ceiling division correct: 25%
 of the subtask's points.
Examples
Input
10 4
Output
14
6
2
2
40
2.500000
3
Input
10 -4
Output
6
14
-3
-2
-40
-2.500000
-2
</details>

<details>
  <summary>  C. Grade Value</summary>

time limit per test 1 second
memory limit per test256 megabytes
You are given a single uppercase letter that represents a grade: one of A, B, C, D, or F. Your task is to print its corresponding numerical value based on the following scale:

Grade	Numerical Value
A	4
B	3
C	2
D	1
F	0
Input
The only input line contains a single character g
 (g∈{A,B,C,D,F}
) — the grade.

Output
Print a single integer — the numerical value of the grade.

Scoring
For this problem, you will receive 20
 points for each correct conversion of a grade letter to its numerical value.

Examples
InputC
A
Output
4
Input
F
Output
0

<details>
  <summary> D. Real Number Operations </summary>
  time limit per test1 second
memory limit per test256 megabytes
Given a real number x
 with exactly two decimal digits. Your task is to compute and output the following values:

the absolute value of x
 with two decimal digits
the square root of |x|
 truncated to two decimal digits∗
 (without rounding)
the floor of x
the ceiling of x
x
 rounded to the nearest integer
∗
Given a real number x
 and a non-negative integer d
, let truncate(x,d)
 denote the result of discarding all decimal digits of x
 beyond the d
-th position after the decimal point. This operation does not round the number; it simply removes digits, moving the value closer to zero (e.g., truncate(3.149,2)=3.14
, truncate(−3.149,2)=−3.14
).

Input
The only input line contains a single real number x
 (|x|≤1018
), given with exactly two digits after the decimal point.

Output
Print exactly five lines, each containing the result of one operation in the specified order.

Scoring
Subtask 1
 (40
 points): 1≤a≤104
Subtask 2
 (60
 points): No additional constraints.
For each subtask, points will be awarded based on the correctness of the following operations:

Absolute value correct: 10%
 of the subtask's points.
Square root correct: 40%
 of the subtask's points.
Floor correct: 10%
 of the subtask's points.
Ceiling correct: 20%
 of the subtask's points.
Rounded correct: 20%
 of the subtask's points.
Examples
Input
17.00
Output
17.00
4.12
17
17
17
Input
5.50
Output
5.50
2.34
5
6
6
Input
4.40
Output
4.40
2.09
4
5
4
Input
4.90
Output
4.90
2.21
4
5
5
Input
-5.00
Output
5.00
2.23
-5
-5
-5
</details>
