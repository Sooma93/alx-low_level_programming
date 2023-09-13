#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - retutn sum
 * @a: first
 * @b: seconed
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - diffrent between a and b
 * @a: first num
 * @b: seconed
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product
 * @a: first
 * @b: seconed
 * Return: the product of two num
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: first
 * @b: seconed
 * Return: the division of two num
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - reminder of division
 * @a: first
 * @b: seconed
 * Return: reminder of division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}
	return (a % b);
}
