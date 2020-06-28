# TCS CodeVita
# Problems


## Prime Fibonnaci
### Problem Description

Given two numbers n1 and n2

1. Find prime numbers between n1 and n2, then

2. Make all possible unique combinations of numbers from the prime numbers list you found in step 1. 

3. From this new list, again find all prime numbers.

4. Find smallest (a) and largest (b) number from the 2nd generated list, also count of this list.

5. Consider smallest and largest number as the 1st and 2nd number to generate Fibonacci series respectively till the count (number of primes in the 2nd list).

6. Print the last number of a Fibonacci series as an output

Constraints
2 <= n1, n2 <= 100

n2 - n1 >= 35

Input Format
One line containing two space separated integers n1 and n2.

Output
Last number of a generated Fibonacci series.

Timeout
1


Test Case
Example 1

Input

2 40

Output

13158006689

Explanation

1st prime list = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37]

Combination of all the primes = [23, 25, 27, 211, 213, 217, 219, 223, 229, 231, 32, 35, 37, 311, 313, 319, 323, 329, 331, 337, 52, 53, 57, 511, 513, 517, 519, 523, 529, 531, 537, 72, 73, 75, 711, 713, 717, 719, 723, 729, 731, 737, 112, 113, 115, 117, 1113, 1117, 1119, 1123, 1129, 1131, 1137, 132, 133, 135, 137, 1311, 1317, 1319, 1323, 1329, 1331, 1337, 172, 173, 175, 177, 1711, 1713, 1719, 1723, 1729, 1731, 1737, 192, 193, 195, 197, 1911, 1913, 1917, 1923, 1929, 1931, 1937, 232, 233, 235, 237, 2311, 2313, 2317, 2319, 2329, 2331, 2337, 292, 293, 295, 297, 2911, 2913, 2917, 2919, 2923, 2931, 2937, 312, 315, 317, 3111, 3113, 3117, 3119, 3123, 3129, 3137, 372, 373, 375, 377, 3711, 3713, 3717, 3719, 3723, 3729, 3731]

2nd prime list=[193, 3137, 197, 2311, 3719, 73, 137, 331, 523, 1931, 719, 337, 211, 23, 1117, 223, 1123, 229, 37, 293, 2917, 1319, 1129, 233, 173, 3119, 113, 53, 373, 311, 313, 1913, 1723, 317]

smallest (a) = 23

largest (b) = 3719

Therefore, the last number of a Fibonacci series i.e. 34th Fibonacci number in the series that has 23 and 3719 as the first 2 numbers is 13158006689

Example 2

Input

30 70

Output

2027041 

Explanation

1st prime list=[31, 37, 41, 43, 47, 53, 59, 61, 67]

2nd prime list generated form combination of 1st prime list = [3137, 5953, 5347, 6761, 3761, 4337, 6737, 6131, 3767, 4759, 4153, 3167, 4159, 6143]

smallest prime in 2nd list=3137
largest prime in 2nd list=6761

Therefore, the last number of a Fibonacci series i.e. 14th Fibonacci number in the series that has 3137 and 6761 as the first 2 numbers is 2027041



## Collision Course
### Problem Description

On a busy road, multiple cars are passing by. A simulation is run to see what happens if brakes fail for all cars on the road. The only way for them to be safe is if they don't collide and pass by each other. The goal is to identify whether any of the given cars would collide or pass by each other safely around a Roundabout. Think of this as a reference point O ( Origin with coordinates (0,0) ), but instead of going around it, cars pass through it.

Considering that each car is moving in a straight line towards the origin with individual uniform speed. Cars will continue to travel in that same straight line even after crossing origin. Calculate the number of collisions that will happen in such a scenario.

Note : - Calculate collisions only at origin. Ignore the other collisions. Assume that each car continues on its respective path even after the collision without change of direction or speed for an infinite distance.

Constraints
1<=C<=10^5

-10^9 <= x,y <= 10^9

0 < v < 10^9.

Input Format
The first line contains an integer C, denoting the number of cars being considered that are passing by around the origin.

Next C lines contain 3 space delimited values, first two of them being for position coordinates (x,y) in 2D space and the third one for speed (v).

Output
A single integer Q denoting the number of collisions at origin possible for given set of cars.

Timeout
1


Test Case
Example 1

Input

5

5 12 1

16 63 5

-10 24 2

7 24 2

-24 7 2

Output

4

Explanation

Let the 5 cars be A, B, C, D, and E respectively.

4 Collisions are as follows -

1) A & B.

2) A & C.

3) B & C.

4) D & E.
