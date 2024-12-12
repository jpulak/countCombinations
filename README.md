# countCombinations
Problem Description:
Write a program that simulates rolling two six-sided dice and displays a report showing the number of times each possible combination of the two dice was rolled.

Get the number of dice rolls from the user by displaying the following prompt before your read:
```
How many times do you want the two dice rolled?
```
Display one space after the question mark and read the number of rolls on the same line as the prompt.

Each die roll can be an unsigned integer value from 1 through 6. There are thirty-six possible combinations of the two rolled dice: 1-1, 1-2, 1-3, 1-4, 1-5, 1-6, 2-1, 2-2, … 6-5, 6-6.

Use a two-dimensional array of unsigned integers to store counters keeping track of the number of times each combination was rolled.

Hint: You can visualize your array of counters as shown below, where cell labelled 1-1 would store the counter for the dice combination of Die 1 = 1 with Die 2 = 1, 3-2 is the counter for dice combination of Die 1 = 3 with Die 2 = 2, etc.

Do not forget that array subscripts start with 0.
```
1	2	3	4	5	6
1	1-1	1-2	1-3	1-4	1-5	1-6
2	2-1	2-2	2-3	2-4	2-5	2-6
3	3-1	3-2	3-3	3-4	3-5	3-6
4	4-1	4-2	4-3	4-4	4-5	4-6
5	5-1	5-2	5-3	5-4	5-5	5-6
6	6-1	6-2	6-3	6-4	6-5	6-6
```
When the number of roles is more than zero, display a report of the following form.
```
The combinations:
Die 1 = 1 Die 2 = 1 occurred 27 times.
Die 1 = 1 Die 2 = 2 occurred 43 times.
Die 1 = 1 Die 2 = 3 occurred 24 times.
Die 1 = 1 Die 2 = 4 occurred 24 times.
Die 1 = 1 Die 2 = 5 occurred 21 times.
Die 1 = 1 Die 2 = 6 occurred 40 times.
Die 1 = 2 Die 2 = 1 occurred 24 times.
Die 1 = 2 Die 2 = 2 occurred 22 times.
Die 1 = 2 Die 2 = 3 occurred 35 times.
Die 1 = 2 Die 2 = 4 occurred 17 times.
Die 1 = 2 Die 2 = 5 occurred 38 times.
Die 1 = 2 Die 2 = 6 occurred 23 times.
Die 1 = 3 Die 2 = 1 occurred 28 times.
Die 1 = 3 Die 2 = 2 occurred 34 times.
Die 1 = 3 Die 2 = 3 occurred 26 times.
Die 1 = 3 Die 2 = 4 occurred 28 times.
Die 1 = 3 Die 2 = 5 occurred 29 times.
Die 1 = 3 Die 2 = 6 occurred 24 times.
Die 1 = 4 Die 2 = 1 occurred 24 times.
Die 1 = 4 Die 2 = 2 occurred 20 times.
Die 1 = 4 Die 2 = 3 occurred 27 times.
Die 1 = 4 Die 2 = 4 occurred 19 times.
Die 1 = 4 Die 2 = 5 occurred 26 times.
Die 1 = 4 Die 2 = 6 occurred 23 times.
Die 1 = 5 Die 2 = 1 occurred 25 times.
Die 1 = 5 Die 2 = 2 occurred 33 times.
Die 1 = 5 Die 2 = 3 occurred 31 times.
Die 1 = 5 Die 2 = 4 occurred 25 times.
Die 1 = 5 Die 2 = 5 occurred 32 times.
Die 1 = 5 Die 2 = 6 occurred 21 times.
Die 1 = 6 Die 2 = 1 occurred 33 times.
Die 1 = 6 Die 2 = 2 occurred 30 times.
Die 1 = 6 Die 2 = 3 occurred 27 times.
Die 1 = 6 Die 2 = 4 occurred 26 times.
Die 1 = 6 Die 2 = 5 occurred 38 times.
Die 1 = 6 Die 2 = 6 occurred 33 times.
Do not forget the newline at the end of the program.
```
Seeding the Random Number Generator
While you develop and test your program in your IDE, generate a seed and seed the random number generator once at the beginning of the main function using the following statements:
```
unsigned int seed;

seed = time(0);

// Call the srand function to seed the random number generator
// The seed is the argument passed to the function

srand(seed);
```
For auto-grading we need predictable results. Replace seed = time(0); with cin >> seed;. In Zylabs, you are reading a seed from the standard input. Zylabs is supplying this input. DO NOT include a prompt for it in your code.

Please note, for a particular seed, Zylabs/Linux generates a different sequence of random numbers that windows or Macs would. You should not expect to get the same numbers on your computer with the same seed.
