# Reverse-Integer

Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321

Have you thought about this?
Here are some good questions to ask before coding. Bonus points for you if you have already thought through this!

If the integer's last digit is 0, what should the output be? ie, cases such as 10, 100.

Did you notice that the reversed integer might overflow? Assume the input is a 32-bit integer, then the reverse of 1000000003 overflows. How should you handle such cases?

For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

My idea:

signed integer -2147483648 to 2147483647

unsigned integer 0 to 4294967295

we need to check whether is overflow after we start to calculate the reverse integer.

if the number is negative, the last digit should not be greater than 8.

if the number is positive, the last digit shoul not be greadter than 7.

so we need to define that this number is negative or positive.

