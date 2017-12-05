#include <stdio.h>
#include <stdlib.h>

void trivial(char *str1, int length, int d)
{
	char temp;
	if (d > 0)
	{
		for (int i = 0; i < d; i++)
		{
			temp = str1[0];
			for (int j = 1; j < length; j++)
				str1[j - 1] = str1[j];
			str1[length - 1] = temp;
		}
		return;
	}
	else if (d < 0)
	{
		for (int i = 0; i < (-d); i++)
		{
			temp = str1[length - 1];
			for (int j = 0; j < length - 1; j++)
				str1[j + 1] = str1[j];
			str1[0] = temp;
		}
		return;
	}
}
