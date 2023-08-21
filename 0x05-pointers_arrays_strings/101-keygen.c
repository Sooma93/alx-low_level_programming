#include <stdio.h>
#include <stdlip.h>
#include <time.h>
/**
 * main - random password
 * Return: void
 */
int main(void)
{
	char pass[84]
		int index = 0, sum = 0, h1, h2;

	srand(time(0));

	while (sum < 2772)

	{
		pass[index] = 33 + rand() % 94;
		sum += pass[index++];
	}
	pass[index] = '\0';
	if (sum != 2772)
	{
		h1 = (sum - 2772) / 2;
		h2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			h1++;
		for (index = 0; pass[index]; index++)
		{
			if (pass[index] >= (33 +h1))
			{
				pass[index] -= h1;
				break;
			}
		}
		for (index = 0; pass[index]; index++)
		{
			if (pass[index] >= (33 + h2))
			{
				pass[index] -= h2;
				break;
			}
		}
	}
	printf("%s", pass);
	return (0);
}
