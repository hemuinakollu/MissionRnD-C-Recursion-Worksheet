/*

You have N steps to climb .
You can either take one step or two steps at a time .
You need to find the total number of ways you can reach N steps .

Example : For N=4 , You can either reach 4 steps in following ways
->1111
->112
->121
->211
->22
So total number of ways is 5

Input : A Integer denoting N (number of steps )
Output : Return an Integer denoting the number of ways to reach N steps

Example Input : get_steps(5)
Example Output : Returns 8

Note : Test Cases would be small <25.

*/
#include "stdafx.h"
int helper(int n)
{
	if (n <= 1)
		return n;
	else
		return helper(n - 1) + helper(n - 2);
}

int get_steps(int s)
{
	if (s >= 1)
	{
		return helper(s + 1);
	}
	else
	{
		return 0;
	}

}




